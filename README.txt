This project demonstrates working of selection sort by creating an animation using cars and praking spots.
OpenGL libraries are used and implemented in C language.
There are 3 scenes in this animation.
The first scene is just an display page of the project tile.
Press the left mouse button to traverse to the next page/scene in the animation.
the second page/scene gives a brief descrription about the select sort algorithm
Press the right mouse button to traverse to the next page/scene in the animation.
The third page/scene is where the main working of the project is shown.
delay() function is used to provide time delay in the project.Change the value there to slow down or spped up the animation speed.
car() function is where the basic layout of the project is made such as the road and the parking spots.
vehilce1()
vehicle2()
vehicle()
vehicle4()	all the above 4 functions are used to draw vehicles in the animation.
scene2() this is the most important function where all the trnsformations happen.
display() this function is where all the above functions are being called at.
Change the vlaues of the translatef,roataef,scalef to make the animation quality better such as perfect spot rotation of the cars etc :)

Execution:(if you are using ubuntu.)
1)open terminal
2)cd to the location where final.c is present.
3)cc final.c -lGL -lGLU -lglut.
4)./a.out

Any compiler can be used.
