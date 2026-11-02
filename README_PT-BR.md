# Freediver's Adventures Dangerous 4 FT Chiyoko — PS3

Etapa 2: documento de design e estrutura inicial de código para um jogo original de aventura submarina 3D. **Este ZIP ainda não é um PKG instalável.**

## Conteúdo
- `docs/GAME_DESIGN.md`: conceito, controles, HUD e fases.
- `src/game_state.h` e `src/game_state.cpp`: lógica inicial de movimento e estado.
- `src/main.cpp`: demonstração simples da lógica.
- `Makefile.ps3.example`: exemplo ilustrativo para uma toolchain PSL1GHT.

## Próximos requisitos
Configurar uma toolchain PS3 homebrew, implementar renderização 3D e entrada do controle, adicionar modelos/animações/áudio e então compilar e empacotar com ferramentas compatíveis. O Makefile pode exigir ajustes conforme a versão instalada. Nenhum binário ou PKG está incluído.
