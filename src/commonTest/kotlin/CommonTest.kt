import kotlin.test.Test
import kotlin.test.assertEquals

class CommonTest {

    @Test
    fun test() {
        val test = by.citech.library.Test()
        assertEquals(0, test.integer)
        assertEquals(listOf("a", "b", "c", "d"), test.list)
        assertEquals(mapOf("a" to "b", "c" to "d"), test.map)
    }

}
