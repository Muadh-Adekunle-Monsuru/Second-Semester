Javascript selector:
```javascript
document.querySelector("tagname")
//returns the first element with the tag name
document. querySelectorAll("tagname")
//returns an array with all the apperances of the tag in the document
```
To create a p tag using javascript
```javascript
p = document.createElement("p")
p.innerText = "Sample DOM Text"
p.setAttribute("id","textID")
document.body.appendChild("p")
//this should create a p tag on the window.
```
Listening for events in javascript
```Javascript

                const target = document.querySelector("h1")
                const target2 = document.querySelector("p")
                 function myfunction(){
                    alert("You clicked the H1!")
                 }function myfunction2(){
                    alert("You clicked the paragraph!")
                 }
                 
                 target.addEventListener('click',myfunction)
                 target2.addEventListener('click',myfunction2)
```
Another example of add eventlistener
```javascript
var h1 = document.createElement('h1')
           h1.innerText = "Type into the input and this text will change"
            var input = document.createElement('input')
            input.setAttribute('type','text')
            document.body.innerText = ' '
            document.body.appendChild(h1)
            document.body.appendChild(input)
            input.addEventListener('change',myFunction)
            function myFunction(){
            h1.innerText = input.value
            }
```