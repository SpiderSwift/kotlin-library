import XCTest
@testable import kotlin_library

class KotlinLibaryTest: XCTestCase {

    let test = Test()

    func testVar() throws {
        self.measure {
            assert(test.integer == 1)
            assert(test.map == ["a" : "b", "c" : "d"])
            assert(test.list == ["a", "b", "c", "d"])
        }
    }

}
