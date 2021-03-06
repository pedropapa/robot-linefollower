## Robô seguidor de linha

Projeto construído durante o curso de robótica do CEPAG. A função do robô é andar em cima de uma linha preta, sempre que o sensor de reflexão IR detecta que há ausência de luz na superfície em que está passando, vai para a direção contrária a do movimento, até voltar a encontrar reflexão de luz, dessa forma o robô se mantém em cima da linha.

Para percursos muito curtos (como o da gif), é recomendado utilizar a entrada VCC de 3V do Arduino, assim os motores terão menos força e podem fazer curvas mais suaves para se manter na linha, em testes com 5V o robô passa muito rápido nas curvas, saindo do percurso.

- [CEPAG - Centro de Educação Profissional Articulado do Guará.](http://www.cepag.se.df.gov.br)

<img src="https://github.com/pedropapa/robot-linefollower/blob/master/assets/apresentacao.gif?raw=true" width="400px"/>

<table>
    <td><img src="https://github.com/pedropapa/robot-linefollower/blob/master/assets/foto1.jpg?raw=true" width="300px"/></td>
    <td><img src="https://github.com/pedropapa/robot-linefollower/blob/master/assets/foto2.jpg?raw=true" width="300px"/></td>
    <td><img src="https://github.com/pedropapa/robot-linefollower/blob/master/assets/foto3.jpg?raw=true" width="300px"/></td>
    <td><img src="https://github.com/pedropapa/robot-linefollower/blob/master/assets/foto4.png?raw=true" width="300px"/></td>
    <td><img src="https://github.com/pedropapa/robot-linefollower/blob/master/assets/foto5.png?raw=true" width="300px"/></td>
</table>

### Componentes

- 1x [Arduino UNO R3](https://www.huinfinito.com.br/arduino/1033-arduino-uno-com-atmega328-smd.html).
- 2x [Motor com Redução 3-6V (180 graus) + Roda Plástica 65x26mm](https://www.huinfinito.com.br/motores/787-kit-motor-reducao-3-6v-180-graus-roda.html).
- 1x [Pilha 9V](https://www.huinfinito.com.br/baterias-acessorios/695-bateria-vertical-9v-170mah-nao-recarregavel.html).
- 2x [Módulo Sensor de Reflexão IR c/ Fotodiodo](https://www.huinfinito.com.br/sensores/1557-modulo-sensor-de-linha-ir-c-fotodiodo.html).
- 1x [Protoboard 400 pontos](https://www.huinfinito.com.br/protoboards/1111-protoboard-400-pontos.html) (É possível utilizar um protoboard mini de 170 pontos).
- 1x [Rodízio Giratório Direcional 24x13mm (Roda Boba)](https://www.huinfinito.com.br/motores/1568-rodizio-giratorio-direcional-24x13mm-roda-boba.html).
- 1x [L293D (Driver para motor DC)](https://www.huinfinito.com.br/drivers-controladores/233-l293d.html).
- 1x [Placa papel foam 50x50xm](https://www.kalunga.com.br/depto/apresentacao/placas-foam/17/1457).
- 1x Switch (Opcional).
- 1x [Suporte para pilha 9V com plug p4](https://www.huinfinito.com.br/baterias-acessorios/818-suporte-1pilha-9v-com-plug-p4.html) (Opcional).

### Custo estimado do projeto em Julho/2020: R$ 135,00.

### [Circuito do projeto no Tinkercard](https://www.tinkercad.com/things/e2qDZYjSq8F).
<img src="https://csg.tinkercad.com/things/e2qDZYjSq8F/t725.png?rev=1595460689514000000&s=&v=1&type=circuits"/>
