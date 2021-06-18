
### Recursive methods are either
- Tail recursive
- Non-tail recursive

**Tail recursive** method has the recursive call as the last statement in the method and nothing happens after that.

**Recursive methods** that are not tail-recursive are called non-tail recursive.

### Tail Recursive is faster than the Non-tail Recursive

The reason _tail recursion_ is faster is that the _function doesn't have to save the state._ Usually in recursion what happens is that the caller's state is saved and then, the called function is called, and once the called function finishes the caller resumes its execution from the same point.
But in tail recursion, we need not resume the execution. This is what the optimization modern compiler wants to do.

### Converting Non-tail to Tail Recursive

- A non-tail recursive method can be converted to a tail-recursive method utilizing an "auxiliary" parameter used to form the result.
- The technique is usually used in conjunction with an "auxiliary" function. This is simply to keep the syntax clean and to hide the fact that auxiliary parameters are needed.
- A tail-recursive method can be implemented by usually using two auxiliary parameters for accumulating results like in factorial function.

### Advantage of Tail Recursive

- Tail Recursive methods are easy to convert to iterative.
- Smart compilers can detect tail recursion and convert it to iterative to optimize code.
- Used to implement loops in languages that do not support loop structures explicilty (e.g.  prolog).










