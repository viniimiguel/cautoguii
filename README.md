# Cautogui
# Requerimentos: OpenCV
## Considerando a exigência de realizar o reconhecimento de imagem para automações em C++, desenvolvi o Cautogui. Este é uma versão inspirada no PyAutoGUI, porém otimizada para aproveitar a velocidade e os privilégios associados à linguagem de programação C++.

## Para a implementação do reconhecimento de imagem, foi utilizado o OpenCV. O funcionamento do sistema ocorre da seguinte maneira:

# Funções de imagem:
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/45d1ca80-4c48-406d-bf1a-5c07b5069e9d)

### Passe o caminho para pasta onde você quer que a screenshot que vai ser analisada fique guardada.
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/0e16e50a-7f85-41ab-81a7-8cffef88f405)

<hr>

### Após isto voce pode utilizar funções para a analise da imagem como:
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/43fa53b8-13cc-4bd1-9161-624f802d2a14)
### Os seguintes parametros terão que ser passados nesta função: 1- Caminho da imagem a ser analisada, 2- Caminho da imagem que você quer encontrar dentro da que será analisada, 3- Grau de confiança para determinar se a imagem foi encontrada ou nao com sendo 0.0 = 0% e 1.0 = 100%
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/b36bea26-0bed-4e50-ba75-88e9537f1b5b)
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/41ac7613-dff2-41d2-9633-4b852089b352)

<hr>

### Esta função era retonar os seguintes parametros: 1- Um booleano (True or False), 2- Se caso encontrada a imagem a posição X, Y em que ela se encontra.
### Vamos agora para uma demonstração simples de como usar esta função: 

![image](https://github.com/viniimiguel/cautoguii/assets/144070822/fb814bf4-4dc1-4367-ae68-8bb69b039a3f)
<hr>

# Funções de mouse:

![image](https://github.com/viniimiguel/cautoguii/assets/144070822/1f6741d1-77e4-442b-ac69-b917a7f50111)

## Função: 
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/212bcfbe-015c-4b1d-b126-99a113813f2e)

<hr>

### Nesta função você deverá passar apenas nos primeiros parametros a posição X, Y do a qual voce deseja que o mouse se mova e por ultimo o tempo de Duração deste movimento em milisegundos Por exemplo: ![image](https://github.com/viniimiguel/cautoguii/assets/144070822/5c9aac60-1572-4cf7-b6fc-cbf4b87d3051)
### Quero movimentar meu mouse para o X:100, Y:100 com a duração de 1 segundo.

<hr>

## Função:
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/ce4bfb61-68ff-4f9c-b41a-7f02d720e446)
### Nesta função voce deverá passar como parametro apenas o numero de quantas vezes você quer clicar e o tipo de botão como por exemplo "left", "right":
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/76d9db76-f2dc-4418-8039-009d08faf77e)

<hr>

## Função:
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/306c7fcf-8f09-4066-8e03-28a319e02c9b)

<hr>

### Nesta função voce deverá passar como parametro para onde voce quer arrastar seu mouse com X e Y e o tempo de duração por exemplo:
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/ec90e225-5619-4a6e-b591-5291d73fd193)
### Neste exemplo o dragTo ira arrastar o seu mouse da posição em que ele estiver ir ate a posição X:100 e Y:100 com a duração de 1 segundo e soltar o click.

<hr>

## Função:
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/ab698b6f-b4bf-483e-be39-8127e280df7f)

### Esta função apenas lhe retornar um pair<int,int> da posição X, Y atual do seu mouse.
### Aqui está um exemplo simples de como usar esta função:
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/4eaeeef3-2015-4e67-b7c4-5e08a295f7cf)

![image](https://github.com/viniimiguel/cautoguii/assets/144070822/fbadc2f6-ceb8-456c-b594-07a134a09b71)
