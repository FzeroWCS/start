# Lógica de programação em C

Projeto criado para meu aprendizado e interação com git
## Preparação do ambiente
Para fins didáticos utilizei o editor Vim sem plugins: optei por utiliizar as configurações 
suportadas pelo editor sem a instalação plugins de ternceiros.

## Localização do arquivo de configuração vimrc
> Windows: ~/vimfiles/vimrc.vim
> Criar o diretório no Windows: windowsterminal

```
$> mkdir ~/vimfiles 
$> ni ~/vimfiles/vimrc.vim
```
> Linux: ~/.vim/vimrc.vim 
Criar o diretório do Linux: shell
``` 
$> mkdir ~/.vim
$> touch ~/.vim/vimrc.vim
```
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

Optei por não utilizar uma IDE para realizar a compilação do código

Utilizei o compliador MinGW.
## Ola mundo em C
~~~C
#include <stdio.h>
int main(){
    printf("Olá");
    retorne 0;
}
~~~

Atenção!! esse arquivo é para adaptação à utilização do ambiente git 
Não recomendo que o utilize para estudo da linguagem C.
