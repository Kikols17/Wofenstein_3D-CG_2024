**MAPCREATOR - explicação**

O processo de criar mapas de jogo é um trabalho muito repetitivo e demorado, como se pode ver pelas quase 5000 linhas de código que compõe o ficheiro src/setuplevels.cpp.
Para não ter que escrever essas linhas todas à mão, criei esta ferramenta *"tools/mapcretor.py"*, que me permite desenhar o mapa num ficheiro de texto normal, e esta encarrega-se de produzir o código por mim.




**Como correr**

Para utilizar a ferramenta *"tools/mapcretor.py"*, basta correr o seguinte comando:
```bash
python3 mapcreator.py <nome_do_mapa> <nome_ficheiro_entrada> <nome_ficheiro_saida>
```

Como no exemplo:
```bash
python3 mapcreator.py wolfenstein wolfenstein.in wolfenstein.out
```