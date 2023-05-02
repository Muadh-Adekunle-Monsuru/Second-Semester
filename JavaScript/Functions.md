```Javascript
const Nav = function(){

}

&&

function Nav(){

}

&&

const Nav = () => {}


```

Another interesting thing about arrow functions is the **implicit return**. However, it only works if it's on the same line of code as the arrow itself. In other words, the implicit return works if your entire component is a single line of code.

To demonstrate how this works, let’s re-write the Nav component as a one-liner:

```Javascript
const Nav = () => <ul><li>Home</li></ul>
```

```Javascript
[10, 20, 30].forEach(function(item) {

        return item * 10

    }

)
&&
[10, 20, 30].forEach(item => item * 10)
```
Every ternary statement conceptually, expressed in pseudo-code, works like this:
```JavaScript
comparision ? true : false; 
name == Bob ? "Yes, it is Bob" : "I don't know this person";
```