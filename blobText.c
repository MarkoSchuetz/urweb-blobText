#include "blobText.h"
#include <urweb/urweb.h>

uw_Basis_string   uw_BlobText_blobText (uw_context ctx, uw_Basis_blob blob){
  char *r = uw_malloc(ctx, blob.size+1);
  memcpy(r, blob.data, blob.size);
  r[blob.size] = '\0';
  return r;
}
