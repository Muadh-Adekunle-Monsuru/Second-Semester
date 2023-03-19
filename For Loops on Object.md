Object.keys():*** Extracts all the keys in an object and placed them in 
```JavaScript
const car2 = {

    speed: 200,

    color: "red"

}

console.log(Object.keys(car2)); // ['speed','color']
```
**Object.values():** Extracts all the values in an object and place them in an array
```JavaScript
const car3 = {

    speed: 300,

    color: "yellow"

}

console.log(Object.values(car3)); // [300, 'yellow']
```
Object.entries(): Extracts all the values and key pair and in object and placed them in a nested arrays of two arrays. 
```JavaScript
const car4 = {

    speed: 400,

    color: 'magenta'

}

console.log(Object.entries(car4));// [['speed',400],['color','magenta']]
```
To loop we use:
```JavaScript
var clothingItem = {
    price: 50,
    color: 'beige',
    material: 'cotton',
    season: 'autumn'
}

for( key of Object.keys(clothingItem) ) {
    console.log(key, ":", clothingItem[key])
}
```
