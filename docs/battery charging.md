# Charging the battery

The charge current will be limited by a MOSFET, for this to work charge should only flow into the battery by the charge MOSFET. So the battery output will have some MOSFETs operating like a diode

MOSFETs will control the output  instead of diodes because of the high forward voltage from diodes

The microcontroller could have some control over the charging current


# carregando a bateria pt-br

Sera usado um mosfet para limitar/controlar a corrente de carga da bateria, para isso é preciso que a corrente flua para a bateria apenas pelo mosfet de carga.
Logo será usado alguns MOSFETs para permitir/limitar um corrente de descarga de no minimo o maximo de entrada do inversor

Os MOSFETs agiram como diodos ja que estes possuem uma queda de tensão significativa para a corrente que será usada

O microcontrolador pode ter algum controle na corrente de carga da bateria
