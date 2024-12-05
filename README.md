# Cube 3D

> This project is about developing a ray casting engine for rendering 3D environments. The starting point for this project is a basic graphics library called minilibx that provides some tools for drawing colored pixels on screen and capture keyboard presses, any complex shape has been developed by us.
>
> The program will receive a configuration file with the extension `.cube`. This file will contain all the configuration parameters along with a 2D representation of the map.

### About ray casting
> Ray casting is a 3D rendering technique very popular in videogames because of it's efficiency. It has allowed for real time rendering when computers where not powerful enough for other techniques. [Here](https://lodev.org/cgtutor/raycasting.html) you can find a detailed explanation about ray casting. But in short it generates lines (rays) that take from the player position and extend until they hit an object in the map. When an object is hit the part that was hit will be rendered on screen. 

### Launch and install
> If you want to run this program you can execute this commands in your terminal:
> ```Shell
>    make deps
>    make
>    ./cube3D map 
>```

### Config file
>* **File textures:** The file expects 4 lines with the filepaths containing the textures for the walls. Each texture represents one face of the wall (North, South, East, West). For each texture a line with the following pattern has to be provided:
> `<NO | SO | WE | EA> <file_path>`
>
>* **Floor and celling colors:** The floor and celling color are indicated with the following line pattern:
> `<F | C> <R>,<G>,<B>`
> Where R G and B stand for red green and blue respectively, and F C for floor and celling, indicating if the color is for the celling or the floor.
>
>* **Map:** At the end of the file there must be a grid with a 2D representation of the map.
>The element codes are as follows:
>>* **Wall:** 1.
>>* **Floor:** 0.
>>* **Character initial position and direction:** One of the following: N, S, W, E.
>>* **Empty space**: <space> note that in a valid map this squares should not be reached by the player. 

### Config file example 
> ```
> NO north.xpm
> SO south.xpm
> WE west.xpm
> EA east.xpm
> F  0, 100, 255
> C  225, 30, 255
>
> 1111111111
> 1000000001
> 10N0000001
> 1001000001
> 1000000001
> 1000000001
> 1111111111
>```

## Controls
> * **Movement:** move arround the map with WASD keys.   
> * **Turn campera:** Turn the camera with left and right arrow keys.
> * **Exit:** Exit the program with ESC key or by pressing the x window button.

*This project was done with [dacortes](https://github.com/dacortes).*