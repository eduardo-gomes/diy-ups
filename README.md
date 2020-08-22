# This will turn into an DC ups
DC because it's more efficient, cheaper and it will be easy to power up a computer with an buck converter when it use atx12vo

# diy-ups
A diy double conversion ups

## 
The goal for this project is to create software and hardware to control an battery charger, a battery and an inversor to make a double conversion ups with usbhid functionality


# pt-br

## carregador
Um carregador que seja possivel controlar a tensão, preparado para ficar ativo 24h

## batteria
Uma bateria com monitoramento de corrente e tensão e dispositivo de proteção

## inversor
Monitoramento da tensão de saida e corrente de entrada e saida, preparado para ficar ativo 24h

## Bypass relay
Com acionamento eletrico, e com acionamento automatico em caso de falha

## Microcontrolador
Monitora a corrente, tensão e temperatura
Controla o carregador, o inversor e o rele
### HID
Fornecera os dados sobre o funcionamento usando uma porta usb

## controle
Deve possuir botão para ligar e desligar, e opcionalmente um para ativar o bypass

## estatisticas
Manter estatisticas sobre falhas, utilização, e capacidade da bateria (pode não ser possivel armazenar muitas estatisticas utilizando um arduino ou outro microcontrolador que possua pouca memoria)

