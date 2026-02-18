program arrayuserinputc
    implicit none
    integer :: SIZE, i
    integer, allocatable :: array(:)

    print *, "Size of the Array: "
    read(*, *) SIZE

    allocate(array(SIZE))

    do i = 1, SIZE
        print *, "array(", i-1, ")="
        read(*, *) array(i)
    end do

    print *
    do i = 1, SIZE
        print *, "array(", i-1, ") = ", array(i)
    end do

    deallocate(array)
end program arrayuserinputc
