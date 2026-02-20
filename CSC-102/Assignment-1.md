# Question 1 #
Ranking of functions (Slowest at top) :
1. $(log log(n))$<sup>1.9</sup>
2. $(log(n))$<sup>0.5</sup>
3. $8 log(n)$
4. $\sqrt{n}$
5. 2<sup>$log(n)$</sup>
6. $log(n!)$
7. $n log(n)$
8. n<sup>1.05</sup>
9. n<sup>1.9</sup>
10. n<sup>3</sup>
11. 3<sup>n</sup>
12. n!



# Question 2
## A
Assumptions: n is a power of 2 .
```cpp
float Arbitary_task (Arr){
    n = Arr. size;
    if (n-1 == 0){
        return Arr [0];
    }

    //let Arr1,Arr2 be arrays of size n/2
    for (i=0; i <= (n/2)-1; i++){
        Arr1[i] =Arr[i]*2;
        Arr2[i]=(Arr[n/2+i])*0.5;
    }
    for (i=0; i <= (n/2)-1; i++){
        for (j=i+1; j <= (n/2)-1; j++){
            if (Arr1[i] == 0.5*Arr2[j])
                Arr2[j] = 10;
        }
    }
    temp1=Arbitary_task(Arr1);
    temp2=Arbitary_task(Arr2);
    return min(temp1,temp2);
}
```
>For n = 1 , this algorithm is of time complexity O(1).

- For n --> &infin; this algorithm will be O(n<sup>2</sup>) as the second ```for``` loop gets the time complexity approximately O(n<sup>2</sup>)


## B
As time complexity is O(n<sup>2</sup>) , 
time taken for 128 units, t = 5*( (128)<sup>2</sup> / (32)<sup>2</sup> )
- t = 5*16 = 80 seconds => 1 minute 20 seconds

# Question 3
As we can assume n to be a large number , thus 

$n > \sqrt{n} > log(n)$

$log(n) > \sqrt{log(n)} > log(log(n))$

2<sup>log(n)</sup>>2<sup>$\sqrt{log(n)}$</sup> > 2<sup>log(log(n))</sup>
>  $n$ > 2<sup>$\sqrt{log(n)}$</sup> > $log(n)$ 

| Function                  | True/False |
| ------------------------- | ---------- |
| O(n)                      | True       |
| O(n<sup>1.9</sup>)        | True       |
| O(log(n))                 | False      |
| o(n)                      | True       |
| o(log(n))                 | False      |
| $\Omega$(n)               | False      |
| $\Omega$(1)               | True       |
| $\Omega$(log(n))          | True       |
| $\omega$(n<sup>0.5</sup>) | False      |
| $\omega$(1)               | True       |
| $\Theta$(n)               | False      |
| $\Theta$(n<sup>1.9</sup>) | False      |
| $\Theta$(log(n))          | False      |

![alt text](IMG_20260220_113635074_HDR.jpg)


#  Question 4 

## (a) $log(n!) = \Theta(nlog(n))$

> $log(n!) = log(n* (n-1) * (n-2) *. . . * 2 * 1) =$ $\sum_{i=1}^{n} log(i)$

- $log(n) + log(n-1) + . . . + log(2) + log(1) <=$ <font color = "cyan">$log(n) + log(n) . . . log(n)$ </font> {n times}

- $log(n!)$ <= $nlog(n)$


>$log(n!) = O(nlog(n)) \qquad -1$

$log(n!) >= log(\frac{n}2) + . . . +log(n) >= \frac{n}{2} log(\frac{n}{2})$

> $log(n!) = \Omega(nlog(n)) \qquad -2$  

**By 1 & 2 , $log(n!) = \Theta(nlog(n))$** 

## (b) $n! = \omega(2^{n})$
$n! = n*(n-1) . . * 2* 1  >= 2*2 . . *2*2 \quad (n\quad times)$

> $n! = \omega(2^n)$

## (c) $n! = O(n^n)$
$n! = n*(n-1) . . * 2* 1  <= n*n . . *n*n \quad (n\quad times)$

> $n! = O(n^n)$

## (d) $\sum_{i = 0}^{n} i^2  = \Theta(n^3)$
<font size = 4> $f(n) = \sum_{i = 0}^{n} i^2 =  \frac{n(n+1)(2n+1)}{6} = \frac{2n^3+ 3n^2 +3n +1}{6}$ </font>
- For $n_0 = 1 , g(n) = n^3$
  - $c = 3/2 , f(n) <= cg(n)$ 
  - $c = 1/6 , f(n) >= cg(n)$
> $f(n) = \Theta(n^3)$ 

## (e) $n^{1.001} + nlog(n) = Θ(n^{1.001})$

For much larger $n$ like $n>2^{14,000}$ , $n^{1/1000} >>log(n)$
- $n*n^{1/1000} >> n*log(n)$
> $\implies n^{1.001} + nlog(n) \approx n^{1.001}$

Thus , $n^{1.001} + nlog(n) = Θ(n^{1.001})$

# Question 5

## (a)
```cpp
sum = 0;
for ( int i =1; i<= n; i++)
    sum += rand () + i ;
```
The for loop runs n times running a constant time function (`sum += rand() + i`)

$\therefore$ Time Complexity is $O(n)$ .

## (b) 
```cpp
sum = 0;
for (int i=1; i<= n; i++)
    for (int j=i ; j<= n; j++)
        sum += i + j ;
```
The for loop runs $\frac{n(n+1)}{2}$ times running a constant time function (`sum += i + j ;`)

$\therefore$ Time Complexity is $O(n^2)$ .

## (c)
```cpp
sum = 0;
i = n;
while ( i > 0) {
    sum += i ;
    i /= 2; }
```
 The loop runs for $log_2 n$ times for a constant time function (`sum += i ;`)

 $\therefore$ Time Complexity is $O(log(n))$

 ## (d) 
 ```cpp
 sum = 0;
for (int i=1; i<= n; i++)
    sum += rand ( );
for (int j=1; j<= m; j++)
    sum += rand ( );
```
$1^{st}$ loop runs for $n$ times for a constant function,$2^{nd}$  loop runs for $m$ times for a constant function.

$\therefore$ Time Complexity is $O(n+m)$

# Question 6

## (a) $p(n) = 2 n^{1.5} + 10, q(n) = 200 n^2 + 100$
For much larger $n$ , $n^2 > n^{1.5}$

$\therefore$ $q(n)$ is asymptotically bigger than $p(n)$.

## (b) $p(n) = 30 n^2 2^n, q(n) = 60 n 2^n + 30 n$

Looking at the terms with higest powers in both functions 
