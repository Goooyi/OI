from enum import Enum
class Solution:
    def isNumber(self, s: str):
        state = Enum("state", [
            "front_space",
            "back_space",
            "front_sign",
            "back_sign",
            "integer",
            "fraction",
            "point_without_int",
            "point_with_int",
            "exp_sign",
            "exp"])
        char_type = Enum("char_type", [
            "num",
            "exp_s",
            "point",
            "sign",
            "space",
            "illegal"
        ])


        def to_char_type(ch):
            if ch.isdigit():
                return char_type.num
            elif ch.lower() == 'e':
                return char_type.exp_s
            elif ch == '.':
                return char_type.point
            elif ch == '+' or ch == '-':
                return char_type.sign
            elif ch == ' ':
                return char_type.space
                return char_type.illegal

        transfer = {
            state.front_space :{
                char_type.sign : state.front_sign,
                char_type.num : state.integer,
                char_type.point : state.point_without_int,
                char_type.space : state.front_space
            },
            state.front_sign: {
                char_type.num : state.integer,
                char_type.point : state.point_without_int,
            },
            state.integer : {
                char_type.num : state.integer,
                char_type.exp_s : state.exp_sign,
                char_type.point : state.point_with_int,
                char_type.space : state.back_space
            },
            state.point_without_int : {
                char_type.num : state.fraction,
            },
            state.point_with_int : {
                char_type.num : state.fraction,
                char_type.space : state.back_space,
                char_type.exp_s : state.exp_sign
            },
            state.fraction : {
                char_type.num : state.fraction,
                char_type.space : state.back_space,
                char_type.exp_s : state.exp_sign
            },
            state.back_sign : {
                char_type.num : state.exp
            },
            state.exp_sign: {
                char_type.num : state.exp,
                char_type.sign : state.back_sign
            },
            state.exp : {
                char_type.num : state.exp,
                char_type.space : state.back_space,
            },
            state.back_space:{
                char_type.space : state.back_space
            }
        }

        cur_state = state.front_space
        for ch in s:
            cur_char_type = to_char_type(ch)
            if cur_char_type not in transfer[cur_state]:
                return False
                cur_state = transfer[cur_state][cur_char_type]

        if cur_state in [state.integer,
            state.point_with_int,
            state.back_space,
            state.fraction,
            state.exp]:
                return True
                return False
