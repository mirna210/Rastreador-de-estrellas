# Rastreador de Estrellas Simulado

##  Descripción del Proyecto
El **Rastreador de Estrellas Simulado** es un sistema que detecta la fuente de luz más intensa (simulando una estrella) y mueve dos servomotores para orientarse hacia ella.  
Utiliza sensores **LDR (Light Dependent Resistor)** conectados a un **Arduino UNO** para leer la intensidad de la luz desde diferentes direcciones y ajustar su posición automáticamente.  

Este proyecto demuestra el principio de funcionamiento de los **seguidores de luz o star trackers**, aplicados en sistemas astronómicos, telescopios automatizados o paneles solares inteligentes.

---

##  Requisitos e Instalación

### Componentes
- 1 × Arduino UNO  
- 4 × LDR (sensores de luz)  
- 4 × Resistencias de 10 kΩ  
- 2 × Servomotores SG90  
- Protoboard y cables jumpers  
- Fuente de alimentación de 5V

###  Software
- Arduino IDE  
- TinkerCAD (opcional, para simulación)

### Instalación
1. Abre el archivo `star_tracker.ino` en **Arduino IDE**.  
2. Conecta el Arduino UNO a tu computadora por USB.  
3. Selecciona la placa *Arduino UNO* y el puerto correcto en el menú *Herramientas*.  
4. Sube el programa al Arduino.  
5. Abre el **Monitor Serial** para visualizar los valores de los sensores.

---

## Cómo usarlo

1. Coloca los cuatro sensores **LDR** en forma de cruz (arriba, abajo, izquierda, derecha).  
2. Usa una **linterna o foco** como fuente de luz para simular una “estrella”.  
3. Al encender el Arduino, el sistema calibrará los sensores.  
4. Los **servos** se moverán para mantener la posición donde la luz sea más intensa.  
5. Si usas **TinkerCAD**, ajusta el nivel de iluminación con las barras de luz para probar su reacción.

---

## Estructura del Proyecto
RastreadorEstrellas/
│
├── star_tracker.ino # Código principal del Arduino
├── README.md # Documentación del proyecto
├── /diagramas/
│ ├── diagrama_pictorico.png
│ ├── diagrama_bloques.png
│ └── diagrama_esquematico.png
└── /docs/
└── manual_tecnico.pdf
