# Test Progetto e utilizzo Renv

setwd("D:/VisualStudioProjects/R/test")

renv::init()
renv::activate()
renv::hydrate("openxlsx", report = FALSE)
