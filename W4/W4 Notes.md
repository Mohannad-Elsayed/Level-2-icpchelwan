## Primes:
- Are divisible by 1 and itself only.
- `1` is not a prime nor a composite.
- All primes can be represented in a form of $6n ± 1$, meaning that for any prime `p`, $p \ \%\ 6$ either equals 1 or 5. Except for `2` and `3` 
- If n is a prime number, then for every a, $1 \le a < n$, the following condition hold:
	- $a^{n-1}\ \% \  n = 1$
- A semi-prime number is a product of two prime numbers.
- To check for primarility of `n`: iterate from 2 to $\sqrt{n}$ and check for divisibility. 

## Prime Factorization:
- We can get the product of elements by multiplying their prime factors. Make sense right?
- To check divisibility: get the prime factors of each number, divide and cancel each common factor:
	- if the dividend has more factors than the divisor: `true`
- Raising some number $n$ to a power $k$ is the same as multiplying it's prime factors by $k$. Make sense right?
- Number of divisors of a given number is $\prod_{k=1}^n p_i + 1$  where $p_i$ is the power of each prime factor in the factorization of the given number, and $n$ is the number of prime factors. More formally, we the product of all prime factors' powers + 1 for each power.
## GCD:
- gcd is the intersection of prime factorization of 2 numbers. 
- By other words, choosing the min power for each factor in both factorization.
- If $r$ is the remainder of dividing  $a$ and $b$, $[r = \frac{a}{b}]$ then $gcd(a,b)$ = $gcd(b, r)$.
- The previous fact allow us to conclude Euclidean Algorithm to find the gcd of 2 numbers:
	- `while(b>0){`
	`t = a%b;`
	`a = b;`
	`b = t;`
	   `}`
	   `return a;`
	

## LCM:
- $lcm(a,b)$  = $\frac{ab}{gcd(a,b)}$
- Choosing the max power for each factor in both factorization.
