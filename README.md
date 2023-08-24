# Rego


> [!NOTE]
> Docu in Galician language

Controlador/programador de rego con varias saidas e entradas de sensado

## [Versión 0V3.][ReGo0v3]
<img src="https://github.com/xdesig/ReGo/blob/master/ReGo_v3/REGO.jpg">

Na versión 3 utilizase un Arduino ProMicro, Ten dúas entradas para sensores de humidade, un DTH11 para sensar a humidade e temperatura ambiental permite controlar oito saídas mediante Mosfets en surtidor común. Conta con un RTC PCF8523T e comunicacións USB e I2C

## [Versión 0V401.][ReGo0v4]
<img src="https://github.com/xdesig/ReGo/blob/master/ReGo_V4/Caixa_3D/ReGo_401.png">

Aqui xa temos un ESP-WROOM-32, con comunicación WiFi, ten unha pantalla oled 128x64 pix, unha botoeira analóxica de cinco pulsadores, catro entradas para sensores capacitivos, dúas entradas activas a nivel alto e dúas entradas activas a nivel baixo, que poden ser usadas como finais de carreira ou para outos fins, ten unha entrada para sensor tipo DHT
conta conun RTC PCF8523T, conta con catro saídas a SSR (Mosfet) de 1A/30V ac ou DC dedicadas xeralmente a activas as electrovalvulas, dúas saídas en surtidor común 2A/30V.

* ###  Deseñado en Estrimia con agarimo.

## Author and license
* Author: [XDeSIG][TWI01]
* License: [CERN Open Hardware Licence Version 2 - Weakly Reciprocal][CERN-OHL-W]
<img src="https://github.com/xdesig/NanoClon/blob/main/img/oshw_facts.svg" width="200" align="right">

* ### To buy boards

Developer don't produce boards to sell. Under [_provider_][provider]
directory there are instructions to order yourself.



<!-- links -->
[ReGo0v3]: https://github.com/xdesig/ReGo/tree/master/ReGo_v3
[ReGo0v4]: https://github.com/xdesig/ReGo/tree/master/ReGo_V4

[CERN-OHL-W]: https://ohwr.org/cern_ohl_w_v2.pdf
[TWI01]: https://twitter.com/xdesig
[provider]: https://www.pcbway.com/project/shareproject/Controlador_de_ReGo_V401_bd0da5d6.html