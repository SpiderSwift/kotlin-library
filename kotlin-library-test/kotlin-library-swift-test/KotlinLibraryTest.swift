import XCTest
@testable import kotlin_library

protocol A {
    associatedtype B
    func test(str: B)
}

class AImpl: A {
    typealias B = String
    
    func test(str: String) {
        print(str)
    }
}


class KotlinLibaryTest: XCTestCase {

    struct InMsg {
        var data: String;
        var reqId: String?
        var reqCnt: Int32?
        var rspReqId: String?
        var rspReqCnt: Int32?
        var rspCnt: Int32?
    }
    
    class InputAdapterImpl : InputAdapter<NSString> {
        func extractReqMeta(body: NSString) -> ReqMeta? {
            return ReqMeta(reqId: "1", reqCnt: 0)
        }
        
        func extractRspMeta(body: NSString) -> RspMeta? {
            return RspMeta(rspReqId: "1", rspReqCnt: 0, rspCnt: 0)
        }
    }
    
    func testVar() throws {
        self.measure {
            let adapter = InputAdapterImpl()
            let req =  adapter.extractReqMeta(body: "")
            print(req)
            
            let factory = ReqRspLayerFactory<NSString, NSString>()
        }
    }

}
