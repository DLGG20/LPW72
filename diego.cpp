import numpy as np
import matplotlib.pyplot as plt

from typing_extensions import Self
class avatar:
    def __init__(self, nombre, raza, reino, nivel, elemento):
        self.nombre = nombre
        self.raza = raza
        self.reino = reino
        self.__nivel = nivel# 2 guiones bajos para que no lo puedan accerderdesde afuera
        self.elemento = elemento

    def subir_nivel(self, experiencia):#metdodo
        self.nivel = self.nivel + 0.01*experiencia/self.nivel#la dibicion hace mas dificil cada ves subir de nivel

    def habilidad(self):
        elementos = ["fuego", "agua", "tierra", "aire"]
        elemento = input("Que habilidad desea para su avatar?")
        while elemento not in elementos:
            print("Ese elemento no está disponible")
            elemento = input("Que elemento desea para su avatar?")
        self.elemento = elemento
    
    def mostrarnivel(self):
        print(f"el nivel es {self.__nivel}")
        self.__condecoracion()

    def __condecoracion(self):
        if self.__nivel>3 and self.__nivel <=5:
            self.raza = f"Novato {self.nombre}"
        elif self.__nivel>5:
            self.raza = f"Teniente {self.nombre}"
        else:
            pass

diego = diego("Diego","guerrero","este",None,None)  
diego.nombre
#Self.nombre
