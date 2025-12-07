highlight ColorColumn ctermbg=gray
set colorcolumn=80
set tabstop=4
set shiftwidth=4
set wrap
set encoding=cp1251
set cursorline
set showmatch

syntax on
filetype on

inoremap <c-b> <Esc>:Lex<cr>:vertical resize 30<cr>
nnoremap <c-b> <Esc>:Lex<cr>:vertical resize 30<cr>

set termwinsize=10x0 
below term 

set belloff=all
set ruler
set ignorecase
