#include "../libs/cSpec/export/cSpec.h"
#include "crossline/crossline.module.spec.h"

int main(void) {
  cspec_run_suite("all", { T_crossline(); });
}
