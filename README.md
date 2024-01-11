# Cautogui
# Requerimentos: OpenCV
## Considerando a exigência de realizar o reconhecimento de imagem para automações em C++, desenvolvi o Cautogui. Este é uma versão inspirada no PyAutoGUI, porém otimizada para aproveitar a velocidade e os privilégios associados à linguagem de programação C++.

## Para a implementação do reconhecimento de imagem, foi utilizado o OpenCV. O funcionamento do sistema ocorre da seguinte maneira:

# Funções de imagem:
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/45d1ca80-4c48-406d-bf1a-5c07b5069e9d)

### Passe o caminho para pasta onde você quer que a screenshot que vai ser analisada fique guardada.
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/0e16e50a-7f85-41ab-81a7-8cffef88f405)
### Após isto voce pode utilizar funções para a analise da imagem como:
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/43fa53b8-13cc-4bd1-9161-624f802d2a14)
### Os seguintes parametros terão que ser passados nesta função: 1- Caminho da imagem a ser analisada, 2- Caminho da imagem que você quer encontrar dentro da que será analisada, 3- Grau de confiança para determinar se a imagem foi encontrada ou nao com sendo 0.0 = 0% e 1.0 = 100%
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/b36bea26-0bed-4e50-ba75-88e9537f1b5b)
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/41ac7613-dff2-41d2-9633-4b852089b352)
### Esta função era retonar os seguintes parametros: 1- Um booleano (True or False), 2- Se caso encontrada a imagem a posição X, Y em que ela se encontra.
### Vamos agora para uma demonstração simples de como usar esta função: 
![image](https://github.com/viniimiguel/cautoguii/assets/144070822/fb814bf4-4dc1-4367-ae68-8bb69b039a3f)

#Funções de mouse:

![image](https://github.com/viniimiguel/cautoguii/assets/144070822/1f6741d1-77e4-442b-ac69-b917a7f50111)




