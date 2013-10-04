#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class TempConvert_FahrenheitToCelsius;
@class TempConvert_FahrenheitToCelsiusResponse;
@class TempConvert_CelsiusToFahrenheit;
@class TempConvert_CelsiusToFahrenheitResponse;
@interface TempConvert_FahrenheitToCelsius : NSObject {
	
/* elements */
	NSString * Fahrenheit;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (TempConvert_FahrenheitToCelsius *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * Fahrenheit;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface TempConvert_FahrenheitToCelsiusResponse : NSObject {
	
/* elements */
	NSString * FahrenheitToCelsiusResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (TempConvert_FahrenheitToCelsiusResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * FahrenheitToCelsiusResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface TempConvert_CelsiusToFahrenheit : NSObject {
	
/* elements */
	NSString * Celsius;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (TempConvert_CelsiusToFahrenheit *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * Celsius;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface TempConvert_CelsiusToFahrenheitResponse : NSObject {
	
/* elements */
	NSString * CelsiusToFahrenheitResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (TempConvert_CelsiusToFahrenheitResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * CelsiusToFahrenheitResult;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <libxml/parser.h>
#import "xsd.h"
#import "TempConvert.h"
@class TempConvertSoap;
@class TempConvertSoap12;
@interface TempConvert : NSObject {
	
}
+ (TempConvertSoap *)TempConvertSoap;
+ (TempConvertSoap12 *)TempConvertSoap12;
@end
@class TempConvertSoapResponse;
@class TempConvertSoapOperation;
@protocol TempConvertSoapResponseDelegate <NSObject>
- (void) operation:(TempConvertSoapOperation *)operation completedWithResponse:(TempConvertSoapResponse *)response;
@end
@interface TempConvertSoap : NSObject <TempConvertSoapResponseDelegate> {
	NSURL *address;
	NSTimeInterval defaultTimeout;
	NSMutableArray *cookies;
	BOOL logXMLInOut;
	BOOL synchronousOperationComplete;
	NSString *authUsername;
	NSString *authPassword;
}
@property (copy) NSURL *address;
@property (assign) BOOL logXMLInOut;
@property (assign) NSTimeInterval defaultTimeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *authUsername;
@property (nonatomic, retain) NSString *authPassword;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(TempConvertSoapOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (TempConvertSoapResponse *)FahrenheitToCelsiusUsingParameters:(TempConvert_FahrenheitToCelsius *)aParameters ;
- (void)FahrenheitToCelsiusAsyncUsingParameters:(TempConvert_FahrenheitToCelsius *)aParameters  delegate:(id<TempConvertSoapResponseDelegate>)responseDelegate;
- (TempConvertSoapResponse *)CelsiusToFahrenheitUsingParameters:(TempConvert_CelsiusToFahrenheit *)aParameters ;
- (void)CelsiusToFahrenheitAsyncUsingParameters:(TempConvert_CelsiusToFahrenheit *)aParameters  delegate:(id<TempConvertSoapResponseDelegate>)responseDelegate;
@end
@interface TempConvertSoapOperation : NSOperation {
	TempConvertSoap *binding;
	TempConvertSoapResponse *response;
	id<TempConvertSoapResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) TempConvertSoap *binding;
@property (readonly) TempConvertSoapResponse *response;
@property (nonatomic, assign) id<TempConvertSoapResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(TempConvertSoap *)aBinding delegate:(id<TempConvertSoapResponseDelegate>)aDelegate;
@end
@interface TempConvertSoap_FahrenheitToCelsius : TempConvertSoapOperation {
	TempConvert_FahrenheitToCelsius * parameters;
}
@property (retain) TempConvert_FahrenheitToCelsius * parameters;
- (id)initWithBinding:(TempConvertSoap *)aBinding delegate:(id<TempConvertSoapResponseDelegate>)aDelegate
	parameters:(TempConvert_FahrenheitToCelsius *)aParameters
;
@end
@interface TempConvertSoap_CelsiusToFahrenheit : TempConvertSoapOperation {
	TempConvert_CelsiusToFahrenheit * parameters;
}
@property (retain) TempConvert_CelsiusToFahrenheit * parameters;
- (id)initWithBinding:(TempConvertSoap *)aBinding delegate:(id<TempConvertSoapResponseDelegate>)aDelegate
	parameters:(TempConvert_CelsiusToFahrenheit *)aParameters
;
@end
@interface TempConvertSoap_envelope : NSObject {
}
+ (TempConvertSoap_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface TempConvertSoapResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
@class TempConvertSoap12Response;
@class TempConvertSoap12Operation;
@protocol TempConvertSoap12ResponseDelegate <NSObject>
- (void) operation:(TempConvertSoap12Operation *)operation completedWithResponse:(TempConvertSoap12Response *)response;
@end
@interface TempConvertSoap12 : NSObject <TempConvertSoap12ResponseDelegate> {
	NSURL *address;
	NSTimeInterval defaultTimeout;
	NSMutableArray *cookies;
	BOOL logXMLInOut;
	BOOL synchronousOperationComplete;
	NSString *authUsername;
	NSString *authPassword;
}
@property (copy) NSURL *address;
@property (assign) BOOL logXMLInOut;
@property (assign) NSTimeInterval defaultTimeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *authUsername;
@property (nonatomic, retain) NSString *authPassword;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(TempConvertSoap12Operation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (TempConvertSoap12Response *)FahrenheitToCelsiusUsingParameters:(TempConvert_FahrenheitToCelsius *)aParameters ;
- (void)FahrenheitToCelsiusAsyncUsingParameters:(TempConvert_FahrenheitToCelsius *)aParameters  delegate:(id<TempConvertSoap12ResponseDelegate>)responseDelegate;
- (TempConvertSoap12Response *)CelsiusToFahrenheitUsingParameters:(TempConvert_CelsiusToFahrenheit *)aParameters ;
- (void)CelsiusToFahrenheitAsyncUsingParameters:(TempConvert_CelsiusToFahrenheit *)aParameters  delegate:(id<TempConvertSoap12ResponseDelegate>)responseDelegate;
@end
@interface TempConvertSoap12Operation : NSOperation {
	TempConvertSoap12 *binding;
	TempConvertSoap12Response *response;
	id<TempConvertSoap12ResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) TempConvertSoap12 *binding;
@property (readonly) TempConvertSoap12Response *response;
@property (nonatomic, assign) id<TempConvertSoap12ResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(TempConvertSoap12 *)aBinding delegate:(id<TempConvertSoap12ResponseDelegate>)aDelegate;
@end
@interface TempConvertSoap12_FahrenheitToCelsius : TempConvertSoap12Operation {
	TempConvert_FahrenheitToCelsius * parameters;
}
@property (retain) TempConvert_FahrenheitToCelsius * parameters;
- (id)initWithBinding:(TempConvertSoap12 *)aBinding delegate:(id<TempConvertSoap12ResponseDelegate>)aDelegate
	parameters:(TempConvert_FahrenheitToCelsius *)aParameters
;
@end
@interface TempConvertSoap12_CelsiusToFahrenheit : TempConvertSoap12Operation {
	TempConvert_CelsiusToFahrenheit * parameters;
}
@property (retain) TempConvert_CelsiusToFahrenheit * parameters;
- (id)initWithBinding:(TempConvertSoap12 *)aBinding delegate:(id<TempConvertSoap12ResponseDelegate>)aDelegate
	parameters:(TempConvert_CelsiusToFahrenheit *)aParameters
;
@end
@interface TempConvertSoap12_envelope : NSObject {
}
+ (TempConvertSoap12_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface TempConvertSoap12Response : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
