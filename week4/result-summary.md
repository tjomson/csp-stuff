# Summary

## Horizontal

### O3

```
    94.864.731.606      cycles:u                                                                (50,00%)
   468.867.460.264      instructions:u                   #    4,94  insn per cycle            
                                                  #    0,03  stalled cycles per insn     (50,00%)
            33.450      L1-icache-load-misses:u                                                 (50,00%)
        22.809.522      L1-dcache-load-misses:u                                                 (50,00%)
   <not supported>      LLC-load-misses:u                                                     
           266.384      cache-misses:u                                                          (50,00%)
        31.654.202      stalled-cycles-frontend:u        #    0,03% frontend cycles idle        (50,00%)
    15.151.046.265      stalled-cycles-backend:u         #   15,97% backend cycles idle         (50,00%)
        30.358.851      branch-misses:u                                                         (50,00%)
               902      iTLB-load-misses:u                                                      (50,00%)
       148.736.374      dTLB-load-misses:u                                                      (50,00%)

      26,253267323 seconds time elapsed

      26,129240000 seconds user
       0,119982000 seconds sys
```

### O0

```
   661.384.633.567      cycles:u                                                                (50,00%)
 1.484.189.499.589      instructions:u                   #    2,24  insn per cycle            
                                                  #    0,23  stalled cycles per insn     (50,00%)
           191.950      L1-icache-load-misses:u                                                 (50,00%)
        57.366.507      L1-dcache-load-misses:u                                                 (50,00%)
   <not supported>      LLC-load-misses:u                                                     
           673.642      cache-misses:u                                                          (50,00%)
        98.294.457      stalled-cycles-frontend:u        #    0,01% frontend cycles idle        (50,00%)
   344.431.858.471      stalled-cycles-backend:u         #   52,08% backend cycles idle         (50,00%)
        30.502.424      branch-misses:u                                                         (50,00%)
             1.066      iTLB-load-misses:u                                                      (50,00%)
       148.176.435      dTLB-load-misses:u                                                      (50,00%)

     161,345864166 seconds time elapsed

     161,223193000 seconds user
       0,096986000 seconds sys
```

## Vertical

### O3

```
774.549.394.878      cycles:u                                                                (50,00%)
   546.880.062.915      instructions:u                   #    0,71  insn per cycle            
                                                  #    0,97  stalled cycles per insn     (50,00%)
           269.198      L1-icache-load-misses:u                                                 (50,00%)
        93.639.598      L1-dcache-load-misses:u                                                 (50,00%)
   <not supported>      LLC-load-misses:u                                                     
        32.252.572      cache-misses:u                                                          (50,00%)
   528.996.694.334      stalled-cycles-frontend:u        #   68,30% frontend cycles idle        (50,00%)
       184.525.532      stalled-cycles-backend:u         #    0,02% backend cycles idle         (50,00%)
        30.519.448      branch-misses:u                                                         (50,00%)
               753      iTLB-load-misses:u                                                      (50,00%)
    49.482.703.021      dTLB-load-misses:u                                                      (50,00%)

     188,344323726 seconds time elapsed

     188,203753000 seconds user
       0,115986000 seconds sys
```

### O0

```
   882.199.163.768      cycles:u                                                                (50,00%)
 1.484.300.560.128      instructions:u                   #    1,68  insn per cycle            
                                                  #    0,38  stalled cycles per insn     (50,00%)
           242.087      L1-icache-load-misses:u                                                 (50,00%)
        35.392.202      L1-dcache-load-misses:u                                                 (50,00%)
   <not supported>      LLC-load-misses:u                                                     
         6.107.096      cache-misses:u                                                          (50,00%)
     2.411.183.580      stalled-cycles-frontend:u        #    0,27% frontend cycles idle        (50,00%)
   562.052.724.207      stalled-cycles-backend:u         #   63,71% backend cycles idle         (50,00%)
        30.576.037      branch-misses:u                                                         (50,00%)
               903      iTLB-load-misses:u                                                      (50,00%)
    50.032.822.050      dTLB-load-misses:u                                                      (50,00%)

     214,608196530 seconds time elapsed

     214,466852000 seconds user
       0,103990000 seconds sys
```

## Original

### O3
```
     1.668.177.537      cycles:u                                                                (49,93%)
     3.878.584.519      instructions:u                   #    2,33  insn per cycle            
                                                  #    0,30  stalled cycles per insn     (49,93%)
            40.354      L1-icache-load-misses:u                                                 (49,97%)
       130.243.043      L1-dcache-load-misses:u                                                 (49,99%)
   <not supported>      LLC-load-misses:u                                                     
         1.379.322      cache-misses:u                                                          (50,01%)
         3.397.475      stalled-cycles-frontend:u        #    0,20% frontend cycles idle        (50,07%)
     1.155.983.169      stalled-cycles-backend:u         #   69,30% backend cycles idle         (50,07%)
         1.084.956      branch-misses:u                                                         (50,03%)
               197      iTLB-load-misses:u                                                      (50,01%)
         4.070.060      dTLB-load-misses:u                                                      (49,99%)

       4,328389452 seconds time elapsed

       0,724779000 seconds user
       3,600905000 seconds sys
```
### O0

```
17.079.060.081      cycles:u                                                                (50,00%)
    24.403.514.594      instructions:u                   #    1,43  insn per cycle            
                                                  #    0,50  stalled cycles per insn     (50,02%)
           295.056      L1-icache-load-misses:u                                                 (50,04%)
       101.051.619      L1-dcache-load-misses:u                                                 (50,03%)
   <not supported>      LLC-load-misses:u                                                     
         4.444.818      cache-misses:u                                                          (50,02%)
        26.519.299      stalled-cycles-frontend:u        #    0,16% frontend cycles idle        (50,00%)
    12.215.767.897      stalled-cycles-backend:u         #   71,52% backend cycles idle         (49,98%)
         1.096.456      branch-misses:u                                                         (49,96%)
               578      iTLB-load-misses:u                                                      (49,97%)
         5.951.230      dTLB-load-misses:u                                                      (49,98%)

      10,219841857 seconds time elapsed

       5,801844000 seconds user
       4,412881000 seconds sys
```

## Unrolled

### O3

```
     1.690.533.881      cycles:u                                                                (49,99%)
     3.899.667.628      instructions:u                   #    2,31  insn per cycle            
                                                  #    0,23  stalled cycles per insn     (49,98%)
            47.908      L1-icache-load-misses:u                                                 (49,97%)
       131.423.115      L1-dcache-load-misses:u                                                 (49,93%)
   <not supported>      LLC-load-misses:u                                                     
         1.414.079      cache-misses:u                                                          (50,00%)
         5.041.505      stalled-cycles-frontend:u        #    0,30% frontend cycles idle        (50,01%)
       896.843.086      stalled-cycles-backend:u         #   53,05% backend cycles idle         (50,02%)
         1.088.209      branch-misses:u                                                         (50,03%)
               143      iTLB-load-misses:u                                                      (50,07%)
         4.299.221      dTLB-load-misses:u                                                      (50,00%)

       4,679425666 seconds time elapsed

       0,719743000 seconds user
       3,957587000 seconds sys
```

### O0

```
    18.854.746.908      cycles:u                                                                (50,01%)
    22.804.573.125      instructions:u                   #    1,21  insn per cycle            
                                                  #    0,66  stalled cycles per insn     (50,03%)
           142.636      L1-icache-load-misses:u                                                 (50,02%)
       125.095.190      L1-dcache-load-misses:u                                                 (50,01%)
   <not supported>      LLC-load-misses:u                                                     
         1.471.499      cache-misses:u                                                          (50,02%)
        36.582.548      stalled-cycles-frontend:u        #    0,19% frontend cycles idle        (49,99%)
    15.002.369.466      stalled-cycles-backend:u         #   79,57% backend cycles idle         (49,97%)
         1.095.321      branch-misses:u                                                         (49,98%)
               352      iTLB-load-misses:u                                                      (49,99%)
         5.265.480      dTLB-load-misses:u                                                      (49,98%)

       9,921203863 seconds time elapsed

       6,577713000 seconds user
       3,334840000 seconds sys
```