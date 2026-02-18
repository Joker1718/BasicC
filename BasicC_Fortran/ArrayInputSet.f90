program arrayinputc
    implicit none
    integer, parameter :: SIZE = 10
    integer :: array(SIZE)
    integer :: i

    do i = 1, SIZE
        write(*, '(A,I0,A)', advance='no') 'array(', i-1, ')='
        read(*, *) array(i)
    end do

    write(*, *)
    do i = 1, SIZE
        write(*, '(A,I0,A,I0)') 'array(', i-1, ') = ', array(i)
    end do
end program arrayinputc
