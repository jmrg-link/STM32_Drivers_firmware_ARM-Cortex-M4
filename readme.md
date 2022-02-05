<div align="center">
  <h1>Creacion de Driver STM32</h1>
  <img src="http://www.carminenoviello.com/wp-content/uploads/2015/06/stm32-butterfly.jpg" alt="vue logo" height="300px">
  <h3 style="font-weight:bold;" >STM32 - Uso de placa desarrollo NUCLEO-64</h3>
  <h5></h5>
</div>

## Requisitos :clipboard:

*   Conocimiento medio c
*   Conocimiento medio de programación c++
*   Placa desarrollo STM32F401< xx >(Familia) 
*   Uso de Software **STM32CUBEIDE** o KEILv5


## Comenzando 🚀

<p>Se detalla una configuracion de uso basico hasta uso moderado personalizando una api interna para configuracion de los drivers segun datasheet.</p>
<p>Se configura un device de la empresa STMicroelectronics </p>

## Software 🧑‍💻
**Uso de Software del fabricante**
* El fabricante proporciona dos herramientas que pueden ser utilizadas para programar dicho hw.
  * **STM32CUBEIDE:**
    * <p>STM32CubeIDE es una plataforma de desarrollo C / C ++ avanzada, con configuración de microcontrolador STM32 IP, generación de código, compilación de código y funciones de depuración. Se basa en el marco ECLIPSE ™ / CDT y la cadena de herramientas GCC para el desarrollo, y GDB para la depuración. Permite la integración de cientos de complementos existentes para completar las funciones de ECLIPSE ™ IDE. </p>
  * **STM32CUBEMX:**
    * <p>STM32CubeMx es una plataforma de software integral que incluye todas las series de productos ST. La plataforma incluye la capa de abstracción de hardware STM32Cube (un software integrado de capa de abstracción STM32 para garantizar la máxima portabilidad en la serie STM32) y un conjunto de componentes de middleware (RTOS, USB, FatFs, TCP / IP, gráficos, etc.).</p>
## Datasheet 📚
**Informacion tecnica Hardware**
* Informacion de Microcontrolador : [STM32 - MCU](https://www.st.com/en/microcontrollers-microprocessors/stm32f401re.html)

* Informacion placa de desarrollo : [STM32 - EVK](https://www.st.com/en/evaluation-tools/nucleo-f401re.html)

## Debug 🚨
**ST-LINK**
* Las pruebas se pueden realizar internamente con el st-link integrado en la plataforma de evaluacion del fabricante.

## Descripcion :notebook:
**Aprender STM32 para crear un device personalizado a bajo nivel**
<p>Este apartado tiene por objetivo de personalizar desde cero un ambiente de desarrollo de drivers para un microcontrolador comercial.</p>

## Listado de contenido: 💯
    *   Instalacion de Ide : STM32CubeIde
    *   Personalizar GPIO : Registros , Interrupciones
    *   Configurar Interrupciones RCC: Clocks 
    *   Practicar conceptos de Timers: Input , Output
    *   Usar Systick : System Timer (Medir Frecuencias y Creacion de Esperas)
    *    Personalizar Watchdog : Custom Driver e Implementacion.