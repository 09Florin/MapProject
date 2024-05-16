# MapProject

Problem’s statements

Suppose two friends live in different cities on a map, such as the Romania map shown below. On every turn, we can simultaneously move each friend to a neighboring city on the map. The amount of time  needed to move from city I to neighbor j is equal to the road distance d(I,j) between the cities, but on each turn the friend that arrives first must wait until the other one arrives before the next turn can begin. We want the two friends to meet as quickly as possible.

![image](https://github.com/09Florin/MapProject/assets/92792343/579e319e-dde3-48a1-a917-d93b2641671b)


Experimental Data

I used 10 combinations of cities in order to test my software.
-	1
Where is the first friend located?
Craiova
 Where does the second friend live?
Bucuresti
Path: Craiova Rimnicu-Vilcea Sibiu Fagaras Bucuresti, Cost: 536
Path: Craiova Rimnicu-Vilcea Pitesti Bucuresti, Cost: 344
Path: Craiova Pitesti Rimnicu-Vilcea Sibiu Fagaras Bucuresti, Cost: 625
Path: Craiova Pitesti Bucuresti, Cost: 239

The shortest path is: Craiova -> Pitesti -> Bucuresti


Friend #1 goes to Pitesti
Friend #2 goes to Pitesti

-	2
Where is the first friend located?
Eforie
 Where does the second friend live?
Timisoara
Path: Eforie Hirsova Urziceni Bucuresti Fagaras Sibiu Rimnicu-Vilcea Craiova Drobeta Mehadia Lugoj Timisoara, Cost: 1069
Path: Eforie Hirsova Urziceni Bucuresti Fagaras Sibiu Rimnicu-Vilcea Pitesti Craiova Drobeta Mehadia Lugoj Timisoara, Cost: 1158
Path: Eforie Hirsova Urziceni Bucuresti Pitesti Rimnicu-Vilcea Craiova Drobeta Mehadia Lugoj Timisoara, Cost: 877
Path: Eforie Hirsova Urziceni Bucuresti Pitesti Craiova Drobeta Mehadia Lugoj Timisoara, Cost: 772

The shortest path is: Eforie -> Hirsova -> Urziceni -> Bucuresti -> Pitesti -> Craiova -> Drobeta -> Mehadia -> Lugoj -> Timisoara


Friend #1 goes to Hirsova
Friend #2 goes to Lugoj
Friend #1 goes to Urziceni
Friend #2 goes to Mehadia
Friend #1 goes to Bucuresti
Friend #2 goes to Drobeta
Friend #1 goes to Pitesti
Friend #2 goes to Craiova
Friend #1 goes to Craiova

-	3
Where is the first friend located?
Iasi
 Where does the second friend live?
Neamt
Path: Iasi Neamt, Cost: -1

The shortest path is: Iasi -> Neamt

-	4
Where is the first friend located?
Drobeta
 Where does the second friend live?
Vaslui
Path: Drobeta Craiova Rimnicu-Vilcea Sibiu Fagaras Bucuresti Urziceni Vaslui, Cost: 826
Path: Drobeta Craiova Rimnicu-Vilcea Pitesti Bucuresti Urziceni Vaslui, Cost: 634
Path: Drobeta Craiova Pitesti Rimnicu-Vilcea Sibiu Fagaras Bucuresti Urziceni Vaslui, Cost: 915
Path: Drobeta Craiova Pitesti Bucuresti Urziceni Vaslui, Cost: 529

The shortest path is: Drobeta -> Craiova -> Pitesti -> Bucuresti -> Urziceni -> Vaslui


Friend #1 goes to Craiova
Friend #2 goes to Urziceni
Friend #1 goes to Pitesti
Friend #2 goes to Bucuresti
Friend #1 goes to Bucuresti



-	5
Where is the first friend located?
Vaslui
 Where does the second friend live?
Drobeta
Path: Vaslui Urziceni Bucuresti Fagaras Sibiu Rimnicu-Vilcea Craiova Drobeta, Cost: 762
Path: Vaslui Urziceni Bucuresti Fagaras Sibiu Rimnicu-Vilcea Pitesti Craiova Drobeta, Cost: 851
Path: Vaslui Urziceni Bucuresti Pitesti Rimnicu-Vilcea Craiova Drobeta, Cost: 570
Path: Vaslui Urziceni Bucuresti Pitesti Craiova Drobeta, Cost: 465

The shortest path is: Vaslui -> Urziceni -> Bucuresti -> Pitesti -> Craiova -> Drobeta


Friend #1 goes to Urziceni
Friend #2 goes to Craiova
Friend #1 goes to Bucuresti
Friend #2 goes to Pitesti
Friend #1 goes to Pitesti

-	6
Where is the first friend located?
Neamt
 Where does the second friend live?
Lugoj
Path: Neamt Iasi Vaslui Urziceni Bucuresti Fagaras Sibiu Rimnicu-Vilcea Craiova Drobeta Mehadia Lugoj, Cost: 1136
Path: Neamt Iasi Vaslui Urziceni Bucuresti Fagaras Sibiu Rimnicu-Vilcea Pitesti Craiova Drobeta Mehadia Lugoj, Cost: 1225
Path: Neamt Iasi Vaslui Urziceni Bucuresti Pitesti Rimnicu-Vilcea Craiova Drobeta Mehadia Lugoj, Cost: 944
Path: Neamt Iasi Vaslui Urziceni Bucuresti Pitesti Craiova Drobeta Mehadia Lugoj, Cost: 839

The shortest path is: Neamt -> Iasi -> Vaslui -> Urziceni -> Bucuresti -> Pitesti -> Craiova -> Drobeta -> Mehadia -> Lugoj


Friend #1 goes to Iasi
Friend #2 goes to Mehadia
Friend #1 goes to Vaslui
Friend #2 goes to Drobeta
Friend #1 goes to Urziceni
Friend #2 goes to Craiova
Friend #1 goes to Bucuresti
Friend #2 goes to Pitesti
Friend #1 goes to Pitesti

-	7
Where is the first friend located?
Sibiu
 Where does the second friend live?
Iasi
Path: Sibiu Rimnicu-Vilcea Craiova Pitesti Bucuresti Urziceni Vaslui Iasi, Cost: 691
Path: Sibiu Rimnicu-Vilcea Pitesti Bucuresti Urziceni Vaslui Iasi, Cost: 504
Path: Sibiu Fagaras Bucuresti Urziceni Vaslui Iasi, Cost: 536

The shortest path is: Sibiu -> Rimnicu-Vilcea -> Pitesti -> Bucuresti -> Urziceni -> Vaslui -> Iasi


Friend #1 goes to Rimnicu-Vilcea
Friend #2 goes to Vaslui
Friend #1 goes to Pitesti
Friend #2 goes to Urziceni
Friend #1 goes to Bucuresti
Friend #2 goes to Bucuresti

-	8
Where is the first friend located?
Bucuresti
 Where does the second friend live?
Hirsova
Path: Bucuresti Urziceni Hirsova, Cost: 170

The shortest path is: Bucuresti -> Urziceni -> Hirsova


Friend #1 goes to Urziceni
Friend #2 goes to Urziceni


-	9
Where is the first friend located?
Giurgiu
 Where does the second friend live?
Zerind
Path: Giurgiu Bucuresti Fagaras Sibiu Oradea Zerind, Cost: 550
Path: Giurgiu Bucuresti Pitesti Rimnicu-Vilcea Sibiu Oradea Zerind, Cost: 518
Path: Giurgiu Bucuresti Pitesti Craiova Rimnicu-Vilcea Sibiu Oradea Zerind, Cost: 705

The shortest path is: Giurgiu -> Bucuresti -> Pitesti -> Rimnicu-Vilcea -> Sibiu -> Oradea -> Zerind


Friend #1 goes to Bucuresti
Friend #2 goes to Oradea
Friend #1 goes to Pitesti
Friend #2 goes to Sibiu
Friend #1 goes to Rimnicu-Vilcea
Friend #2 goes to Rimnicu-Vilcea

-	10
Where is the first friend located?
Oradea
 Where does the second friend live?
Fagaras
Path: Oradea Sibiu Rimnicu-Vilcea Craiova Pitesti Bucuresti Fagaras, Cost: 616
Path: Oradea Sibiu Rimnicu-Vilcea Pitesti Bucuresti Fagaras, Cost: 429
Path: Oradea Sibiu Fagaras, Cost: 150

The shortest path is: Oradea -> Sibiu -> Fagaras


Friend #1 goes to Sibiu
Friend #2 goes to Sibiu

