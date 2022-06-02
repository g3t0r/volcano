#include "fmt.h"
#include "keyboard.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printerr("Need a filename.\n");
    return 1;
  }

  const char *fname = argv[1];

  struct kbd_keymap_t kmap = {
    .a = KBD_KMAP_A,
    .a_m = KBD_KMAP_MODE_NORMAL,
    .b = KBD_KMAP_B,
    .b_m = KBD_KMAP_MODE_NORMAL,
    .c = KBD_KMAP_C,
    .c_m = KBD_KMAP_MODE_NORMAL,
    .d = KBD_KMAP_D,
    .d_m = KBD_KMAP_MODE_NORMAL,
    .e = KBD_KMAP_E,
    .e_m = KBD_KMAP_MODE_NORMAL,
    .f = KBD_KMAP_F,
    .f_m = KBD_KMAP_MODE_NORMAL,
    .g = KBD_KMAP_G,
    .g_m = KBD_KMAP_MODE_NORMAL,
    .h = KBD_KMAP_H,
    .h_m = KBD_KMAP_MODE_NORMAL,
    .i = KBD_KMAP_I,
    .i_m = KBD_KMAP_MODE_NORMAL,
    .j = KBD_KMAP_J,
    .j_m = KBD_KMAP_MODE_NORMAL,
    .k = KBD_KMAP_K,
    .k_m = KBD_KMAP_MODE_NORMAL,
    .l = KBD_KMAP_L,
    .l_m = KBD_KMAP_MODE_NORMAL,
    .m = KBD_KMAP_M,
    .m_m = KBD_KMAP_MODE_NORMAL,
    .n = KBD_KMAP_N,
    .n_m = KBD_KMAP_MODE_NORMAL,
    .o = KBD_KMAP_O,
    .o_m = KBD_KMAP_MODE_NORMAL,
    .p = KBD_KMAP_P,
    .p_m = KBD_KMAP_MODE_NORMAL,
    .q = KBD_KMAP_Q,
    .q_m = KBD_KMAP_MODE_NORMAL,
    .r = KBD_KMAP_R,
    .r_m = KBD_KMAP_MODE_NORMAL,
    .s = KBD_KMAP_S,
    .s_m = KBD_KMAP_MODE_NORMAL,
    .t = KBD_KMAP_T,
    .t_m = KBD_KMAP_MODE_NORMAL,
    .u = KBD_KMAP_U,
    .u_m = KBD_KMAP_MODE_NORMAL,
    .v = KBD_KMAP_V,
    .v_m = KBD_KMAP_MODE_NORMAL,
    .w = KBD_KMAP_W,
    .w_m = KBD_KMAP_MODE_NORMAL,
    .x = KBD_KMAP_X,
    .x_m = KBD_KMAP_MODE_NORMAL,
    .y = KBD_KMAP_Y,
    .y_m = KBD_KMAP_MODE_NORMAL,
    .z = KBD_KMAP_Z,
    .z_m = KBD_KMAP_MODE_NORMAL,
    .k0 = KBD_KMAP_0,
    .k0_m = KBD_KMAP_MODE_NORMAL,
    .k1 = KBD_KMAP_1,
    .k1_m = KBD_KMAP_MODE_NORMAL,
    .k2 = KBD_KMAP_2,
    .k2_m = KBD_KMAP_MODE_NORMAL,
    .k3 = KBD_KMAP_3,
    .k3_m = KBD_KMAP_MODE_NORMAL,
    .k4 = KBD_KMAP_4,
    .k4_m = KBD_KMAP_MODE_NORMAL,
    .k5 = KBD_KMAP_5,
    .k5_m = KBD_KMAP_MODE_NORMAL,
    .k6 = KBD_KMAP_6,
    .k6_m = KBD_KMAP_MODE_NORMAL,
    .k7 = KBD_KMAP_7,
    .k7_m = KBD_KMAP_MODE_NORMAL,
    .k8 = KBD_KMAP_8,
    .k8_m = KBD_KMAP_MODE_NORMAL,
    .k9 = KBD_KMAP_9,
    .k9_m = KBD_KMAP_MODE_NORMAL,
    .f1 = KBD_KMAP_F1,
    .f1_m = KBD_KMAP_MODE_NORMAL,
    .f2 = KBD_KMAP_F2,
    .f2_m = KBD_KMAP_MODE_NORMAL,
    .f3 = KBD_KMAP_F3,
    .f3_m = KBD_KMAP_MODE_NORMAL,
    .f4 = KBD_KMAP_F4,
    .f4_m = KBD_KMAP_MODE_NORMAL,
    .f5 = KBD_KMAP_F5,
    .f5_m = KBD_KMAP_MODE_NORMAL,
    .f6 = KBD_KMAP_F6,
    .f6_m = KBD_KMAP_MODE_NORMAL,
    .f7 = KBD_KMAP_F7,
    .f7_m = KBD_KMAP_MODE_NORMAL,
    .f8 = KBD_KMAP_F8,
    .f8_m = KBD_KMAP_MODE_NORMAL,
    .f9 = KBD_KMAP_F9,
    .f9_m = KBD_KMAP_MODE_NORMAL,
    .f10 = KBD_KMAP_F10,
    .f10_m = KBD_KMAP_MODE_NORMAL,
    .f11 = KBD_KMAP_F11,
    .f11_m = KBD_KMAP_MODE_NORMAL,
    .f12 = KBD_KMAP_F12,
    .f12_m = KBD_KMAP_MODE_NORMAL,
    .enter = KBD_KMAP_ENTER,
    .enter_m = KBD_KMAP_MODE_NORMAL,
    .esc = KBD_KMAP_CAPS,
    .esc_m = KBD_KMAP_MODE_NORMAL,
    .backspace = KBD_KMAP_BACKSPACE,
    .backspace_m = KBD_KMAP_MODE_NORMAL,
    .tab = KBD_KMAP_TAB,
    .tab_m = KBD_KMAP_MODE_NORMAL,
    .space = KBD_KMAP_SPACE,
    .space_m = KBD_KMAP_MODE_NORMAL,

    .minus = KBD_KMAP_MINUS,
    .minus_m = KBD_KMAP_MODE_NORMAL,
    .plus= KBD_KMAP_PLUS,
    .plus_m = KBD_KMAP_MODE_NORMAL,
    .lbracket = KBD_KMAP_LBRACKET,
    .lbracket_m = KBD_KMAP_MODE_NORMAL,
    .rbracket = KBD_KMAP_RBRACKET,
    .rbracket_m = KBD_KMAP_MODE_NORMAL,
    .backslash = KBD_KMAP_BACKSLASH,
    .backslash_m = KBD_KMAP_MODE_NORMAL,
    .colon = KBD_KMAP_COLON,
    .colon_m = KBD_KMAP_MODE_NORMAL,
    .ap = KBD_KMAP_APOSTROPHE,
    .ap_m = KBD_KMAP_MODE_NORMAL,
    .tilde = KBD_KMAP_TILDE,
    .tilde_m = KBD_KMAP_MODE_NORMAL,
    .comma = KBD_KMAP_COMMA,
    .comma_m = KBD_KMAP_MODE_NORMAL,
    .dot = KBD_KMAP_DOT,
    .dot_m = KBD_KMAP_MODE_NORMAL,
    .slash = KBD_KMAP_SLASH,
    .slash_m = KBD_KMAP_MODE_NORMAL,
    .caps = KBD_KMAP_CAPS,
    .caps_m = KBD_KMAP_MODE_NORMAL,

    .ps = KBD_KMAP_PS,
    .ps_m = KBD_KMAP_MODE_NORMAL,
    .sl = KBD_KMAP_SL,
    .sl_m = KBD_KMAP_MODE_NORMAL,
    .pb = KBD_KMAP_PB,
    .pb_m = KBD_KMAP_MODE_NORMAL,
    .ins = KBD_KMAP_INS,
    .ins_m = KBD_KMAP_MODE_NORMAL,
    .hm = KBD_KMAP_HM,
    .hm_m = KBD_KMAP_MODE_NORMAL,
    .pu = KBD_KMAP_PU,
    .pu_m = KBD_KMAP_MODE_NORMAL,
    .del = KBD_KMAP_DEL,
    .del_m = KBD_KMAP_MODE_NORMAL,
    .end = KBD_KMAP_END,
    .end_m = KBD_KMAP_MODE_NORMAL,
    .pd = KBD_KMAP_PD,
    .pd_m = KBD_KMAP_MODE_NORMAL,
    .right = KBD_KMAP_RIGHT,
    .right_m = KBD_KMAP_MODE_NORMAL,
    .left = KBD_KMAP_LEFT,
    .left_m = KBD_KMAP_MODE_NORMAL,
    .down = KBD_KMAP_DOWN,
    .down_m = KBD_KMAP_MODE_NORMAL,
    .up = KBD_KMAP_UP,
    .up_m = KBD_KMAP_MODE_NORMAL,

    .lshift = KBD_KMAP_LSHIFT,
    .lshift_m = KBD_KMAP_MODE_MODAL,
    .rshift = KBD_KMAP_RSHIFT,
    .rshift_m = KBD_KMAP_MODE_MODAL,
    .lctrl = KBD_KMAP_LCTRL,
    .lctrl_m = KBD_KMAP_MODE_MODAL,
    .rctrl = KBD_KMAP_RCTRL,
    .rctrl_m = KBD_KMAP_MODE_MODAL,
    .lalt = KBD_KMAP_LALT,
    .lalt_m = KBD_KMAP_MODE_MODAL,
    .ralt = KBD_KMAP_META,
    .ralt_m = KBD_KMAP_MODE_MODAL,
    .meta = KBD_KMAP_META,
    .meta_m = KBD_KMAP_MODE_MODAL,
    .menu = KBD_KMAP_RALT,
    .menu_m = KBD_KMAP_MODE_MODAL,
  };

  FILE *f = fopen(fname, "wb");
  size_t mapsz = sizeof (struct kbd_keymap_t);
  uint8_t *bytes = (uint8_t *) &kmap;
  fwrite(bytes, mapsz, 1, f);
  fclose(f);

  return 0;
}
