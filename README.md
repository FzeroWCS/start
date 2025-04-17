
Atenção!! esse arquivo é para meu estudo e utilização do ambiente git 
Não recomendo que o utilize para estudo da linguagem C.

# Lógica de programação em C

Projeto criado para meu aprendizado e interação com git
## Preparação do ambiente
Para fins didáticos utilizei o editor **Vim** sem plugins: optei por utiliizar as configurações 
suportadas pelo editor sem a instalação plugins de ternceiros.

## Localização do arquivo de configuração vimrc
> - Windows: ~/vimfiles/vimrc.vim 
> - Linux: ~/.vim/vimrc.vim 
---
Criar arquivo de configuração do Vim: 
---
```
$> mkdir ~/vimfiles 
$> ni ~/vimfiles/vimrc.vim
```
---
Criar o diretório do Linux: shell
``` 
$> mkdir ~/.vim
$> touch ~/.vim/vimrc.vim
```
---

- **set number**  Exibe numeração das linhas
- **set relativenumber**  Exibe a numeração das linhas em relação à linha atual
- **set scrolloff=2**  Posiciona o cursor em duas linhas antes do fianl da tela
- **set cursorline**  Destaca a linha atual
- **set autoindent**
- **set smartindent**
- **set expandtab**
- **set tabstop=3**
- **set softtabstop=3**
- **set shiftwidth=3**
- **syntax on** Destaque de sintax do código
Optei por não utilizar uma IDE para realizar a compilação do código

#Compilador utilizado
> - MinGw (MinGW - Minimalist GNU for Windows)

## Ola mundo em C
~~~C
#include <stdio.h>
int main(){
    printf("Hello World!");
    retorne 0;
}
~~~
#Lista de tarefas
- [] Como instalar o compilador MinGW
- [] Como instalar o Vim (Windows, Linux)
