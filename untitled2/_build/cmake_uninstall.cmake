if(NOT EXISTS "/home/misha/untitled2/_build/install_manifest.txt")
  message(FATAL_ERROR "Cannot find install manifest: /home/misha/untitled2/_build/install_manifest.txt")
endif(NOT EXISTS "/home/misha/untitled2/_build/install_manifest.txt")

file(READ "/home/misha/untitled2/_build/install_manifest.txt" files)
string(REGEX REPLACE "\n" ";" files "${files}")
foreach(file ${files})
  message(STATUS "Uninstalling $ENV{DESTDIR}${file}")
  if(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
    exec_program(
      "/usr/bin/cmake" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
      OUTPUT_VARIABLE rm_out
      RETURN_VALUE rm_retval
      )
    if(NOT "${rm_retval}" STREQUAL 0)
      message(FATAL_ERROR "Problem when removing $ENV{DESTDIR}${file}")
    endif(NOT "${rm_retval}" STREQUAL 0)
  else(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
    message(STATUS "File $ENV{DESTDIR}${file} does not exist.")
  endif(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
endforeach(file)

# Удаление пустых каталогов
foreach(_file ${files})
  set(_res 0)
  while(_res EQUAL 0)
    get_filename_component(_file ${_file} DIRECTORY)
    execute_process(COMMAND rmdir ${_file} RESULT_VARIABLE _res OUTPUT_QUIET ERROR_QUIET)
  endwhile()
endforeach()

