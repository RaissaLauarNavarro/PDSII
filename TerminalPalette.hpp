#ifndef COLORS_H
#define COLORS_H
#include <iostream>

namespace color {
                    
  const std::string gray  = "\e[30;10m", // normal
                    grayn = "\e[30;1m", // negrito
                    grayf = "\e[30;2m", // fraco
                    grayi = "\e[30;3m", // itálico
                    grays = "\e[30;4m", // sublinhado
                    grayp = "\e[30;5m", // piscando
                    grayb = "\e[30;7m", // background
                    grayc = "\e[30;9m", // cancelado

                    red  = "\e[31;10m", // normal
                    redn = "\e[31;1m", // negrito
                    redf = "\e[31;2m", // fraco
                    redi = "\e[31;3m", // itálico
                    reds = "\e[31;4m", // sublinhado
                    redp = "\e[31;5m", // piscando
                    redb = "\e[31;7m", // background
                    redc = "\e[31;9m", // cancelado

                    green  = "\e[32;10m", // normal
                    greenn = "\e[32;1m", // negrito
                    greenf = "\e[32;2m", // fraco
                    greeni = "\e[32;3m", // itálico
                    greens = "\e[32;4m", // sublinhado
                    greenp = "\e[32;5m", // piscando
                    greenb = "\e[32;7m", // background
                    greenc = "\e[32;9m", // cancelado

                    yellow  = "\e[33;10m", // normal
                    yellown = "\e[33;1m", // negrito
                    yellowf = "\e[33;2m", // fraco
                    yellowi = "\e[33;3m", // itálico
                    yellows = "\e[33;4m", // sublinhado
                    yellowp = "\e[33;5m", // piscando
                    yellowb = "\e[33;7m", // background
                    yellowc = "\e[33;9m", // cancelado

                    blue  = "\e[34;10m", // normal
                    bluen = "\e[34;1m", // negrito
                    bluef = "\e[34;2m", // fraco
                    bluei = "\e[34;3m", // itálico
                    blues = "\e[34;4m", // sublinhado
                    bluep = "\e[34;5m", // piscando
                    blueb = "\e[34;7m", // background
                    bluec = "\e[34;9m", // cancelado

                    purple  = "\e[35;10m", // normal
                    purplen = "\e[35;1m", // negrito
                    purplef = "\e[35;2m", // fraco
                    purplei = "\e[35;3m", // itálico
                    purples = "\e[35;4m", // sublinhado
                    purplep = "\e[35;5m", // piscando
                    purpleb = "\e[35;7m", // background
                    purplec = "\e[35;9m", // cancelado

                    cyan  = "\e[36;10m", // normal
                    cyann = "\e[36;1m", // negrito
                    cyanf = "\e[36;2m", // fraco
                    cyani = "\e[36;3m", // itálico
                    cyans = "\e[36;4m", // sublinhado
                    cyanp = "\e[36;5m", // piscando
                    cyanb = "\e[36;7m", // background
                    cyanc = "\e[36;9m", // cancelado

                    white  = "\e[38;10m", // normal
                    whiten = "\e[38;1m", // negrito
                    whitef = "\e[38;2m", // fraco
                    whitei = "\e[38;3m", // itálico
                    whites = "\e[38;4m", // sublinhado
                    whitep = "\e[38;5m", // piscando
                    whiteb = "\e[38;7m", // background
                    whitec = "\e[38;9m", // cancelado

                    off = "\e[m"; // desativa a cor personalizada
}

#endif