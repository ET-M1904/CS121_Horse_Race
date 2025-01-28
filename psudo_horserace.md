//include iostream
//include random


/void advance
The function advance decide which of the horse moves or not.
This function would have the horses be given a 50:50 chance of moving up a space randomly.
Use the C++ random code
if return 0, the horse will not move
if return 1, the horse will move
Add one to the value in the array for that horse
The temporay varibles will store the location of where the horse's number is.
Start a for loop to interate through the array.sentry is i, add one to the i each time, end when i get to 15
If the value at i is not a period 
give the value at i to a period 


/void printLane
The function printLane will get the horse's number and the arrey of horses
start a for loop to interate through the arrey, sentry is i, add one to i each time, and when i get to 15
print i
print a new line
If the vaue of the horse number in the array, return true

/void isWinner
Make a boolean function caled isWinner that gets the horse's number and the array of the horses
if the 14th value of the array is not a period, return true
else return false

make a main function 
make an array of horses that contian five zeros 
start a for loop, sentry is i, add one to i each time, and when i gets to 15
start a while loop 
inside the for loop if isWinner returns true, print i won the race
