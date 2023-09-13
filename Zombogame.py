import sys
import math

# Humie fluent interface init
class Humie:
    def __init__(self,posx,posy):
        self.id = id
        self.x = posx
        self.y = posy

    def move_to(self,x,y):
        self.x = x
        self.y = y
        return self

# Zombo fluent interface init
class Zombie:
    def __init__(self, id, x, y, xnext, ynext):
        self.id = id
        self.x = x
        self.y = y
        self.xnext = xnext
        self.ynext = ynext

    def move_to(self, newX, newY):
        self.x = newX
        self.y = newY
        return self

    def get_dest(self):
        return "{self.xnext} {self.ynext}"
        
# Save humans, destroy zombies!
# game loop
#while True:
    x, y = [int(i) for i in input().split()]
    human_count = int(input())
    for i in range(human_count):
        human_id, human_x, human_y = [int(j) for j in input().split()]
    zombie_count = int(input())

    
    
    zombies = []
    for i in range(zombie_count):
        zombie_id, zombie_x, zombie_y, zombie_xnext, zombie_ynext = [int(j) for j in input().split()]
        zombie = Zombie(zombie_id, zombie_x, zombie_y, zombie_xnext, zombie_ynext)
        zombies.append(zombie)

    for zombie in zombies:
        destination = zombie.move_to(zombie.x, zombie.y).get_dest()
        print(destination)