# Teste em Linguagem C

Meu primeiro programa em C. Um experimento simples de movimentação de personagem
no terminal, feito para entender como a linguagem funciona na prática. (3 anos atrás)

## O que faz

Renderiza uma "sala" 15×5 no prompt de comando, com paredes (`W`) e um jogador (`P`)
que pode ser movido com as teclas WASD em tempo real.

```
WWWWWWWWWWWWWWW
W             W
W    P        W
W             W
WWWWWWWWWWWWWWW
```

## Controles

| Tecla | Ação      |
|-------|-----------|
| W     | Cima      |
| A     | Esquerda  |
| S     | Baixo     |
| D     | Direita   |

## Tecnologias e dependências

- Linguagem C
- `conio.h` — captura de tecla sem Enter (`_kbhit`, `_getch`)
- `system("cls")` — limpeza de tela para simular animação

> ⚠️ Funciona apenas no Windows, devido ao uso de `conio.h` e `cls`.

## Contexto

Primeiro contato com C. O objetivo era entender o básico da linguagem —
tipos primitivos, loops, condicionais e I/O — aplicados em algo visual e interativo.
Nenhuma engine, nenhuma biblioteca gráfica: só terminal mesmo.
