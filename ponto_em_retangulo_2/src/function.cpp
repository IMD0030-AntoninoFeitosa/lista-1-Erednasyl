#include "function.h"

namespace function {
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    //Verificação de degenerados
    if (IE.x != SD.x && IE.y != SD.y){
        if ((P.x > IE.x && P.x < SD.x) && (P.y > IE.y && P.y < SD.y)){
            return location_t::INSIDE;
        }
        
        else if (P.x == IE.x || P.x == SD.x || P.y == IE.y || P.y == SD.y){
            return location_t::BORDER;
        }
        return location_t::OUTSIDE;
    }
    else {
        return location_t::INVALID;
    }
}
}
