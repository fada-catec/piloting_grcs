FILE(GLOB_RECURSE DATA_IMAGES "*.png" "*.jpg" "*.svg")

INSTALL(FILES ${DATA_IMAGES}
   DESTINATION share/${PROJECT_NAME})

INSTALL(DIRECTORY meshes
   DESTINATION share/${PROJECT_NAME})

INSTALL(DIRECTORY svg
   DESTINATION share/${PROJECT_NAME})
