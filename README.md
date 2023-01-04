# Music Player system with Finite State Machine

in this respiporitary it will contain a music player system with finite state machine application. This includes C languange implentation.

## Testing main program

A music player FSM (finite state machine) is a system that controls the behavior of a music player by transitioning between different states based on inputs and outputs.

## States

1.  **Stopped**: The music player is stopped and not playing any music.
2.  **Playing**: The music player is currently playing a song.
3.  **Paused**: The music player is paused and not playing any music, but the current song will resume from where it left off when the player is resumed.

-   **Play**: `00`
-   **Pause**: `01`
-   **Stop**: `10`

## Inputs
the system contains two input which is play/pause button repsented with: **P** 
and a Stop button repsented with: **S**

## State diagram
below is the state diagram for the music player fsm:

![Untitled Diagram drawio (2)](https://user-images.githubusercontent.com/114371959/210585758-a24f1053-cb6f-4a90-9c92-c3747b98a764.png)

## Truth Table
we can construct a truth table from the state diagram:

![image](https://user-images.githubusercontent.com/114371959/210586156-4bb64dce-6f8d-4546-91e9-7674de9fa159.png)

## Karnaugh map
We're able to to construct Karnaugh map for each of the states and outputs fromm the truth table.
from the Kmaps, we can also derive simpile Boolean expressions.
(the **'** represent NOT)

**s0:**

![image](https://user-images.githubusercontent.com/114371959/210587166-1a27036b-507e-40bd-935d-14dcba2087a1.png)

s0 = S'

**s1:**

![image](https://user-images.githubusercontent.com/114371959/210587332-9f106c2b-94ce-4b11-9e82-198e652ecbc8.png)

s1 = PSs0'

**o0:**

![image](https://user-images.githubusercontent.com/114371959/210587495-80637f47-3c78-4b8c-82ef-f3ebeefaeead.png)

o0 = Ss0 + PS

