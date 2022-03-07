# CS 4833 Extra Credit Homework 1

## Overview
This Project was complied in clang and ran on an ARM Macbook Pro.
The goal of this code was to explore the run times of two different algorithms, Quicksort and Selection Sort.

When first creating this project, I started out in Python; however I found the time to sort even small input arrays to be on the order of seconds.
I realized this would become a problem when needing to take multiple runs at high input sizes;
so I decided to switch to C. 
After switching to C I found runtimes to be very short, which solved this problem. 

## Theory
Theoretically, what should happen is that Selection sort beats out quicksort for very small input sizes, but should lose to quicksort for larger sized inputs. 
This is because of each function's asymptotic complexity classes. 

## Experiment
For this experiment I ran each algorithm five times and took the average of each input size and graphed that indepednently and against the other data set. 
This was done on an ARM Macbook Pro using Clang, so there could be some differences on different hardware.

## Results
![QvS](https://user-images.githubusercontent.com/94238706/156947083-ebecd833-2d3d-4fef-8192-afacd1f90ef7.png)
As you can see from the following image, for all values of input (excluding those at the beginning that are close), Quicksort is faster than Selection Sort for all values of input. 
We see that quicksort is equal or better in all cases of random input. 

## Conclusion
I conclude that the hybrid search algorithm should be **solely quicksort** because it performed as well, or better than selection sort for all input sizes.
