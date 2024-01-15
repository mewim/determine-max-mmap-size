#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <stdint.h>

int main(void)
{
    size_t min = 0;
    size_t max = SIZE_MAX;
    while (min < max)
    {
        unsigned long long mid_ull = ((unsigned long long)min + (unsigned long long)max) / 2;
        if (mid_ull > SIZE_MAX)
        {
            mid_ull = SIZE_MAX;
        }
        size_t mid = (size_t)mid_ull;
        void *addr = (void *)mmap(NULL, mid, PROT_READ | PROT_WRITE,
                                  MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
        if (addr == MAP_FAILED)
        {
            max = mid;
            printf("mmap failed with length: \t%llu\n", (unsigned long long)mid);
        }
        else
        {
            min = mid + 1;
            munmap(addr, mid);
            printf("mmap succeeded with length: \t%llu\n", (unsigned long long)mid);
        }
    }
    int divider_length = 80;
    char divider_char = '-';
    char divider[divider_length + 1];
    for (int i = 0; i < divider_length; ++i)
    {
        divider[i] = divider_char;
    }
    divider[divider_length] = '\0';
    printf("%s\n", divider);
    printf("max mmap length in this system is: %lu\n", (unsigned long)min - 1);
    return 0;
}
