# first, copy the GDX library
gdxlib <- "gdxlib/libgdxdclib64.so"
if (WINDOWS) {
  gdxlib <- "gdxlib/gdxdclib64.dll"
}
dest <- file.path(R_PACKAGE_DIR, paste0("bin", R_ARCH))
dir.create(dest, recursive = TRUE, showWarnings = FALSE)
file.copy(gdxlib, dest, overwrite = TRUE)

# next, copy the package SHLIBs normally done by default

files <- Sys.glob(paste0("*", SHLIB_EXT))
dest <- file.path(R_PACKAGE_DIR, paste0('libs', R_ARCH))
dir.create(dest, recursive = TRUE, showWarnings = FALSE)
file.copy(files, dest, overwrite = TRUE)
if (file.exists("symbols.rds")) {
  file.copy("symbols.rds", dest, overwrite = TRUE)
}
