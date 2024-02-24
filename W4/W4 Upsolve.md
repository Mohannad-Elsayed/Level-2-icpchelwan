- ```OG``` = Original Problem || ```Tut``` = Tutorial || ```Sol``` = Solution (Actual Code)
- For different solutions, google the problem name with ```file:.cpp```
- Or limit your search on youtube for video upsolve ```site:youtube.com```
 

- `Important links`: [Some topics in depth](https://mfleck.cs.illinois.edu/building-blocks/version-1.3/number-theory.pdf)
  
# A - Printing some primes:
- [`OG`](https://www.spoj.com/problems/TDPRIMES/en/)
- `Tut`: Simple Sieve implementation. `If (stuck)` [`read`](https://www.geeksforgeeks.org/sieve-of-eratosthenes/)
- [```Sol```](https://ideone.com/cEV87Y)

# B - Next Prime:
- [`OG`](https://atcoder.jp/contests/abc149/tasks/abc149_c?lang=en)
- `Tut`: Multiple solutions exist, you can use Sieve or iterate from the starting position to $n$ and break if a prime is found. [This](https://en.wikipedia.org/wiki/Prime_gap) ensures that this solution will not give TLE, as the gab between 2 primes is $log(n)$ on average.
- ```Sol```:
  - [sol1](https://ideone.com/JOtnPN)
  - [sol2](https://ideone.com/qGJjYw)

# C - Keep Dividing:
- [`OG`](https://codeforces.com/group/Hag8K9hH54/contest/477240/problem/M) *join [Helwan Level 1 Training - 2024](https://codeforces.com/group/Hag8K9hH54/contests)*
- [`Tut`](https://drive.google.com/file/d/1UF_LuONinaifxSi7RRp33Gsv7p2CSh4Q/view?usp=drive_link)
- [```Sol```](https://ideone.com/qkVnS5)

# D - Use Sieve if you can: 
### *couldn't fine the original*
- `Tut`: We multiply the power of the prime factors of the input number by the power of the input number. For example, if $x$ has prime factors: [ $2^3$, $3^2$ ]. So, $X^n$ equals [ $2^{3n}$, $3^{2n}$ ].
- [```Sol```](https://ideone.com/cfwEup)

# E - T-primes:
- [`OG`](https://codeforces.com/problemset/problem/230/B)
- [`Tut`](https://codeforces.com/blog/entry/5437)
- ```Sol```:
    - [web archive](https://web.archive.org/web/20161225205232/http://pastie.org/4897166)
    - [youtube](https://www.youtube.com/watch?v=UuZjx6eT1s8)

# F - Omkar and Last Class of Math:
- [`OG`](https://codeforces.com/problemset/problem/1372/B)
- [`Tut`](https://codeforces.com/blog/entry/79974)
- ```Sol```:
   - [github](https://github.com/Saurav-Paul/Codeforces-Problem-Solution-By-Saurav-Paul/blob/master/B.%20Omkar%20and%20Last%20Class%20of%20Math%20.cpp)
   - [youtube](https://www.youtube.com/watch?v=a7pHtQ1N6DE)

# G - Just Eat It!:
- [`OG`](https://codeforces.com/problemset/problem/1285/B)
- [`Tut`](https://codeforces.com/blog/entry/72950)
- ```Sol```: In the Tutorial.

# H - Divisor Summation:
- [`OG`](https://www.spoj.com/problems/DIVSUM/en/)
- [`Tut`](https://codeforces.com/blog/entry/78435)
- [```Sol```](https://github.com/marioyc/Online-Judge-Solutions/blob/master/SPOJ/Classical/74%20-%20Divisor%20Summation.cpp)

# I - k-rounding:
- [`OG`](https://codeforces.com/problemset/problem/858/A)
- [`Tut`](https://codeforces.com/blog/entry/54604)

# J - Arena of Greed:
- [`OG`](https://codeforces.com/problemset/problem/1425/A)
- [`Tut`](https://codeforces.com/blog/entry/83148)
  - Or: in each step, player `A` either take one coin or half the coins, if he choose to greedly take half the coins when possible, the other half could be divisible by 2 and player `B` can take $\frac{1}{4}$ of the coins. So player `A` must take half the coins if $\frac{coins}{2}$ is odd, otherwise he take one coin to force player `B` to take only one coin. 
- [```Sol```](https://codeforces.com/contest/1425/submission/94148836)

# K - Divide and Equalize:
- [`OG`](https://codeforces.com/problemset/problem/1881/D)
- [`Tut`](https://codeforces.com/blog/entry/121327)
- ```Sol```: In the Tutorial
    - [youtube](https://www.youtube.com/watch?v=5eUY1VxvCAs)
    
# L - EhAb AnD gCd:
- [`OG`](https://codeforces.com/contest/1325/problem/A)
- `Tut`: $1$ and $x-1$ always work. Can you prove it?

# M - Coprime:
- [`OG`](https://codeforces.com/problemset/problem/1742/D)
- [`Tut`](https://codeforces.com/blog/entry/107962)
- [```Sol```](https://github.com/KareemTahaAbdelfattah/Codeforces-Solutions/blob/main/1742D%20-%20Coprime.cpp)

# N - Interesting Function:
- [`OG`](https://codeforces.com/problemset/problem/1538/F)
- [`Tut`](https://codeforces.com/blog/entry/91637)
- ```Sol```: In the Tutorial
    - [youtube](https://www.youtube.com/watch?v=33SidTjF2tc) *heavy language*
    - [github](https://github.com/tridibsamanta/Codeforces_Solutions/blob/master/1538F.cpp)

# O - Hossam and Trainees:
- [`OG`](https://codeforces.com/problemset/problem/1771/C)
- [`Tut`](https://codeforces.com/blog/entry/110092)
- ```Sol```:
    - [youtube](https://www.youtube.com/watch?v=dNG89OWupIk) *heavy language*

# P - Almost Prime:
- [`OG`](https://codeforces.com/problemset/problem/26/A)
- [`Tut`](https://codeforces.com/blog/entry/610)
- [```Sol```](https://github.com/fuwutu/CodeForces/blob/master/26A%20-%20Almost%20Prime.cpp)

# Q - Integer Factorization (15 digits):
- [`OG`](https://www.spoj.com/problems/FACT0/en/)
- `Tut`: Prime factorization of a number, account for the overflow.
- [```Sol```](https://github.com/joy-mollick/Number-Theory/blob/master/SPOJ-FACT0%20-%20Integer%20Factorization%20(15%20digits).cpp)

# R - Number of common divisors:
- [`OG`](https://www.spoj.com/problems/COMDIV/en/)
- `Tut`: Find prime divisors of the $gcd(a,b)$
- [```Sol```](https://github.com/love1024/spoj-solution-with-explanation/blob/master/COMDIV.cpp)

# S - Square Difference:
- [`OG`](https://codeforces.com/problemset/problem/1033/B)
- [`Tut`](https://codeforces.com/blog/entry/62287) 
    - [Another Tut](https://www.geeksforgeeks.org/check-if-difference-of-areas-of-two-squares-is-prime/)
- [```Sol```](https://github.com/Shah-Shishir/Codeforces-Solutions/blob/master/1033B.%20Square%20Difference.cpp)

# T - Fedya and Maths:
- [`OG`](https://codeforces.com/problemset/problem/456/B)
- [`Tut`](https://codeforces.com/blog/entry/13336)
    - Another solution is to check divisibility by $4$ for the input number. A number $n$ is divisible y $4$ if the last 2 digits are divisible by $4$. Or just use python ^_^.
- ```Sol```: In the editorial.
    - [ideone](https://ideone.com/4k9wsB) *c++*
    - [ideone](https://ideone.com/M1zx5F) *python*

