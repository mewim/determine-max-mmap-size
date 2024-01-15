# determine-max-mmap-size
This is a simple program to determine the maximum mmap size on a system with binary search.

# Usage
```bash
make
./determine-max-mmap-size
```

# Example output
```
$ ./determine-max-mmap-size
mmap failed with length: 	9223372036854775807
mmap failed with length: 	4611686018427387903
mmap failed with length: 	2305843009213693951
mmap failed with length: 	1152921504606846975
mmap failed with length: 	576460752303423487
mmap failed with length: 	288230376151711743
mmap failed with length: 	144115188075855871
mmap failed with length: 	72057594037927935
mmap failed with length: 	36028797018963967
mmap failed with length: 	18014398509481983
mmap failed with length: 	9007199254740991
mmap failed with length: 	4503599627370495
mmap failed with length: 	2251799813685247
mmap failed with length: 	1125899906842623
mmap failed with length: 	562949953421311
mmap failed with length: 	281474976710655
mmap failed with length: 	140737488355327
mmap succeeded with length: 	70368744177663
mmap failed with length: 	105553116266495
mmap succeeded with length: 	87960930222079
mmap succeeded with length: 	96757023244287
mmap succeeded with length: 	101155069755391
mmap succeeded with length: 	103354093010943
mmap succeeded with length: 	104453604638719
mmap succeeded with length: 	105003360452607
mmap failed with length: 	105278238359551
mmap failed with length: 	105140799406079
mmap succeeded with length: 	105072079929343
mmap failed with length: 	105106439667711
mmap failed with length: 	105089259798527
mmap failed with length: 	105080669863935
mmap failed with length: 	105076374896639
mmap failed with length: 	105074227412991
mmap failed with length: 	105073153671167
mmap failed with length: 	105072616800255
mmap failed with length: 	105072348364799
mmap failed with length: 	105072214147071
mmap failed with length: 	105072147038207
mmap failed with length: 	105072113483775
mmap failed with length: 	105072096706559
mmap failed with length: 	105072088317951
mmap failed with length: 	105072084123647
mmap failed with length: 	105072082026495
mmap failed with length: 	105072080977919
mmap failed with length: 	105072080453631
mmap failed with length: 	105072080191487
mmap failed with length: 	105072080060415
mmap failed with length: 	105072079994879
mmap failed with length: 	105072079962111
mmap failed with length: 	105072079945727
mmap failed with length: 	105072079937535
mmap failed with length: 	105072079933439
mmap failed with length: 	105072079931391
mmap failed with length: 	105072079930367
mmap failed with length: 	105072079929855
mmap failed with length: 	105072079929599
mmap failed with length: 	105072079929471
mmap failed with length: 	105072079929407
mmap failed with length: 	105072079929375
mmap failed with length: 	105072079929359
mmap failed with length: 	105072079929351
mmap failed with length: 	105072079929347
mmap failed with length: 	105072079929345
mmap succeeded with length: 	105072079929344
--------------------------------------------------------------------------------
max mmap length in this system is: 105072079929344
```