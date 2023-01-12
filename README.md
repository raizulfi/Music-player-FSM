# Music Player system with Finite State Machine 🎶 

**in this respiporitary it will contain a music player system with finite state machine application. This includes C languange implentation.**

A music player FSM (finite state machine) is a system that controls the behavior of a music player by transitioning between different states based on inputs and outputs.

## States 

1.  **Stopped**: The music player is stopped and not playing any music.
2.  **Playing**: The music player is currently playing a song.
3.  **Paused**: The music player is paused and not playing any music, but the current song will resume from where it left off when the player is resumed.

-   **Play**: `10`
-   **Pause**: `01`
-   **Stop**: `00`

## Inputs 
the music player fsm accepts two 1-bit inputs:

**1** : PLAY AND PAUSE

**0** : STOP

## State diagram
below is the state diagram for the music player fsm:

![Untitled Diagram drawio (5)](https://user-images.githubusercontent.com/114371959/211787458-6d725771-a583-455e-9ebf-14872f36961c.png)

## Truth Table
we can construct a truth table from the state diagram:

![image](https://user-images.githubusercontent.com/114371959/211804778-1e6fe6ee-d050-4249-9c8e-9194372e9cb2.png)

## Karnaugh map
We're able to to construct Karnaugh map for each of the states and outputs fromm the truth table.
from the Kmaps, we can also derive simpile Boolean expressions.

![image](https://user-images.githubusercontent.com/114371959/211805080-d7373eed-d066-4d57-97fa-35a981f2c7ca.png)


## Running the code

below you'd see a test run of the code:

![main c - music player fsm - Visual Studio Code 2023-01-11 19-25-55](https://user-images.githubusercontent.com/114371959/211808604-a168b146-da32-44c9-85a8-5541ecd9ebad.gif)
