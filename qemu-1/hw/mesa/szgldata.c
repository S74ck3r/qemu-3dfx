#include "mglfuncs.h"

static int sztype(int type) {
  static const struct { int type; int n; } gltype[] = {
/* ---- generated by genszgl ---- */
{ .type = GL_HALF_FLOAT, .n = 2 },
{ .type = GL_SHORT, .n = 2 },
{ .type = GL_UNSIGNED_SHORT, .n = 2 },
{ .type = GL_UNSIGNED_SHORT_1_5_5_5_REV, .n = 2 },
{ .type = GL_UNSIGNED_SHORT_4_4_4_4, .n = 2 },
{ .type = GL_UNSIGNED_SHORT_4_4_4_4_REV, .n = 2 },
{ .type = GL_UNSIGNED_SHORT_5_5_5_1, .n = 2 },
{ .type = GL_UNSIGNED_SHORT_5_6_5, .n = 2 },
{ .type = GL_UNSIGNED_SHORT_5_6_5_REV, .n = 2 },
{ .type = GL_FIXED, .n = 4 },
{ .type = GL_FLOAT, .n = 4 },
{ .type = GL_INT, .n = 4 },
{ .type = GL_INT_2_10_10_10_REV, .n = 4 },
{ .type = GL_UNSIGNED_INT, .n = 4 },
{ .type = GL_UNSIGNED_INT_10F_11F_11F_REV, .n = 4 },
{ .type = GL_UNSIGNED_INT_10_10_10_2, .n = 4 },
{ .type = GL_UNSIGNED_INT_24_8, .n = 4 },
{ .type = GL_UNSIGNED_INT_2_10_10_10_REV, .n = 4 },
{ .type = GL_UNSIGNED_INT_8_8_8_8, .n = 4 },
{ .type = GL_UNSIGNED_INT_8_8_8_8_REV, .n = 4 },
{ .type = GL_DOUBLE, .n = 8 },
{ .type = GL_FLOAT_32_UNSIGNED_INT_24_8_REV, .n = 8 },
/* ---- generated by genszgl ---- */
    { 0, 0},
  };
  int i;
  for (i=0; gltype[i].n; i++) {
    if (type == gltype[i].type) break;
  }
  return (gltype[i].n)? gltype[i].n:1;
}

#define SIZE_2 2
#define SIZE_3 3
#define SIZE_4 4
static int szformat(int format) {
  static const struct { int format; int n; } glformat[] = {
/* ---- generated by genszgl ---- */
{ .format = GL_RG, .n = 2 },
{ .format = SIZE_2, .n = 2 },
{ .format = GL_BGR, .n = 3 },
{ .format = GL_RGB, .n = 3 },
{ .format = SIZE_3, .n = 3 },
{ .format = GL_BGRA, .n = 4 },
{ .format = GL_RGBA, .n = 4 },
{ .format = SIZE_4, .n = 4 },
{ .format = GL_V2F, .n = 8 },
{ .format = GL_C4UB_V2F, .n = 12 },
{ .format = GL_V3F, .n = 12 },
{ .format = GL_C4UB_V3F, .n = 16 },
{ .format = GL_T2F_V3F, .n = 20 },
{ .format = GL_C3F_V3F, .n = 24 },
{ .format = GL_N3F_V3F, .n = 24 },
{ .format = GL_T2F_C4UB_V3F, .n = 24 },
{ .format = GL_T2F_C3F_V3F, .n = 32 },
{ .format = GL_T2F_N3F_V3F, .n = 32 },
{ .format = GL_T4F_V4F, .n = 32 },
{ .format = GL_C4F_N3F_V3F, .n = 40 },
{ .format = GL_T2F_C4F_N3F_V3F, .n = 48 },
{ .format = GL_T4F_C4F_N3F_V4F, .n = 60 },
/* ---- generated by genszgl ---- */
    { 0, 0},
  };
  int i;
  for (i=0; glformat[i].n; i++) {
    if (format == glformat[i].format) break;
  }
  return (glformat[i].n)? glformat[i].n:1;
}

static int szpname(int pname) {
  static const struct { int pname; int n; } glpname[] = {
/* ---- generated by genszgl ---- */
{ .pname = GL_MAP1_TEXTURE_COORD_2, .n = 2 },
{ .pname = GL_MAP2_TEXTURE_COORD_2, .n = 2 },
{ .pname = GL_COLOR_INDEXES, .n = 3 },
{ .pname = GL_DISTANCE_ATTENUATION_EXT, .n = 3 },
{ .pname = GL_MAP1_NORMAL, .n = 3 },
{ .pname = GL_MAP1_TEXTURE_COORD_3, .n = 3 },
{ .pname = GL_MAP1_VERTEX_3, .n = 3 },
{ .pname = GL_MAP2_NORMAL, .n = 3 },
{ .pname = GL_MAP2_TEXTURE_COORD_3, .n = 3 },
{ .pname = GL_MAP2_VERTEX_3, .n = 3 },
{ .pname = GL_SPOT_DIRECTION, .n = 3 },
{ .pname = GL_AMBIENT, .n = 4 },
{ .pname = GL_AMBIENT_AND_DIFFUSE, .n = 4 },
{ .pname = GL_BLEND_COLOR, .n = 4 },
{ .pname = GL_COLOR_CLEAR_VALUE, .n = 4 },
{ .pname = GL_DIFFUSE, .n = 4 },
{ .pname = GL_EMISSION, .n = 4 },
{ .pname = GL_EYE_PLANE, .n = 4 },
{ .pname = GL_FOG_COLOR, .n = 4 },
{ .pname = GL_LIGHT_MODEL_AMBIENT, .n = 4 },
{ .pname = GL_MAP1_COLOR_4, .n = 4 },
{ .pname = GL_MAP1_TEXTURE_COORD_4, .n = 4 },
{ .pname = GL_MAP1_VERTEX_4, .n = 4 },
{ .pname = GL_MAP2_COLOR_4, .n = 4 },
{ .pname = GL_MAP2_TEXTURE_COORD_4, .n = 4 },
{ .pname = GL_MAP2_VERTEX_4, .n = 4 },
{ .pname = GL_OBJECT_PLANE, .n = 4 },
{ .pname = GL_POSITION, .n = 4 },
{ .pname = GL_SCISSOR_BOX, .n = 4 },
{ .pname = GL_SPECULAR, .n = 4 },
{ .pname = GL_TEXTURE_BORDER_COLOR, .n = 4 },
{ .pname = GL_TEXTURE_ENV_COLOR, .n = 4 },
{ .pname = GL_TEXTURE_SWIZZLE_RGBA, .n = 4 },
{ .pname = GL_VIEWPORT, .n = 4 },
{ .pname = GL_MODELVIEW_MATRIX, .n = 16 },
{ .pname = GL_PROJECTION_MATRIX, .n = 16 },
/* ---- generated by genszgl ---- */
    { 0, 0},
  };
  int i;
  for (i=0; glpname[i].n; i++) {
    if (pname == glpname[i].pname) break;
  }
  return (glpname[i].n)? glpname[i].n:1;
}

int szgldata(int format, int type)
{
  int ret = szformat(format)*sztype(type);
  switch(type) {
  case GL_INT_2_10_10_10_REV:
  case GL_UNSIGNED_BYTE_2_3_3_REV:
  case GL_UNSIGNED_BYTE_3_3_2:
  case GL_UNSIGNED_INT_10F_11F_11F_REV:
  case GL_UNSIGNED_INT_10_10_10_2:
  case GL_UNSIGNED_INT_2_10_10_10_REV:
  case GL_UNSIGNED_INT_8_8_8_8:
  case GL_UNSIGNED_INT_8_8_8_8_REV:
  case GL_UNSIGNED_SHORT_1_5_5_5_REV:
  case GL_UNSIGNED_SHORT_4_4_4_4:
  case GL_UNSIGNED_SHORT_4_4_4_4_REV:
  case GL_UNSIGNED_SHORT_5_5_5_1:
  case GL_UNSIGNED_SHORT_5_6_5:
  case GL_UNSIGNED_SHORT_5_6_5_REV:
    ret /= szformat(format);
    break;
  default:
    break;
  }
  return ret;
}
int szglname(int pname) { return szpname(pname); }

