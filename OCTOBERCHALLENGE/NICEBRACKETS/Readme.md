You have to use stack in this problem.
Only open brackets will be pushed in the stack and whenever we encounter a close bracket a stack element will be poped and compared with the current bracket if they belong to same pair of opening and closing bracket then continue else print the 1 Based index of current bracket(closing bracket).

Also when you encounter with the closing bracket and you find that stack is empty i.e. there is no opening bracket in the stack. So, this condition should also be checked when encountered closing bracket and if it's true display 1 Based index of current bracket(closing bracket).

You also have to maintain an another stack which stores the 1 Based index of the opening bracket because it's possible that some open brackets never gets closed.So, when you had completely iterated over the string and you find that the stack is not empty then pop the index from the index stack.
And if stack is empty then display NICE.
