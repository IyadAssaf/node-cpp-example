#include <node.h>
#include <v8.h>
#include "portaudio/include/portaudio.h"

using namespace v8;

Handle<Value> hello(const Arguments& args) {
    HandleScope scope;
    return scope.Close(String::New("world"));
}

Handle<Value> porty(const Arguments& args)
{
    HandleScope scope;
    int err = Pa_Initialize();
    if(err == paNoError)
    {
        return scope.Close(String::New("SUCCESS initialized port audio...?"));
    } else {
        return scope.Close(String::New(Pa_GetErrorText(err)));
    }
}

void init(Handle<Object> target) {
    target->Set(String::NewSymbol("hello"),
        FunctionTemplate::New(hello)->GetFunction());

    target->Set(String::NewSymbol("porty"),
        FunctionTemplate::New(porty)->GetFunction());
}


NODE_MODULE(hello, init)
