The spread operator can be used to join arrays in javascript.
```JavaScript
spread is ...
fruit1 = ['apple','pear']
fruit2 = ['oranges','apple']
joined = [...fruit1,...fruit2]
//joined is now['apple','pear','oranges','apple'] 
```
It can also work on objects
```Javascript
const flying = { wings: 2 }

const car = { wheels: 4 }

const flyingCar = {...flying, ...car}

console.log(flyingCar) // {wings: 2, wheels: 4}
```
It can also be used to add new members to an existing array
```javascript
let fruit = ['apple','pineapple']
fruit = [...fruit, 'organges','banana']
console.log(fruit) //['apple','pineapple', 'organges','banana'] 
```
It can be also used to convert strings to arrays;
```Javascript
const greeting = "Hello";

const arrayOfChars = [...greeting];

console.log(arrayOfChars); //  ['H', 'e', 'l', 'l', 'o']
```
It can also be used to copy objects into another objects
```Javascript
const car1 = {
	speed: 205,
	color: "yellow"
}
const car2 = {...car1}
```