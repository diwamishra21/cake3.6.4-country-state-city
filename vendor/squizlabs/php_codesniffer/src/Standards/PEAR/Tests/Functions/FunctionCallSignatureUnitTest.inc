<?php test(
);
test();
test($arg, $arg2);
isset ();
test( );
test() ;
test( $arg);
empty( $arg );
eval ( $arg );

if (is_array($arg) === true) {

}

$something = get($arg1, $arg2);
$something = get($arg1, $arg2) ;
$something = get($arg1, $arg2)   ;

// No errors as this test only checks for function calls.
class TestClass extends MyClass
{

    const const1 = 'hello';
    const CONST2 = 'hello';

    public function test () { }
}

make_foo($string/*the string*/, true/*test*/);
make_foo($string/*the string*/, true/*test*/ );
make_foo($string /*the string*/, true /*test*/);
make_foo(/*the string*/$string, /*test*/true);
make_foo( /*the string*/$string, /*test*/true);

// No errors should be throw here because
// this is multi-line.
throw new Exception(
    'Exception text'
);

// Objects are the same as a normal call.
$obj = new TestClass( );

// Heredocs dont need to be indented.
method_call(
<<<EOH
Anyone want to recomment parse errors?

EOH
);

fputs(
    STDOUT,
    'Examples:
    $ {$app} --all
    $ {$app} --all');

fputs(STDOUT,
    "Examples:
    $ {$app} --all
    $ {$app} --all",
$something
    );

// This is not a function call.
function &testFunction($arg1,
    $arg2,
) {
}

$array = array();
array_map(
    function($x)
    {
        return trim($x);
    },
    $array
);

array_map(
     function($x)
     {
         return trim($x);
     },
    $array
);

$bar = new stdClass(
    4,
    5,
    6
   
);

$bar = new stdClass(
    4,
    5,
    6

);

$foo = new stdClass(
    1,
    2,
    3);

public function doSomething()
{
    return $this->getFoo()
        ->doBar(
            $this->getX() // no comma here
                ->doY()  // this is still the first method argument
                ->doZ()  // this is still the first method argument
        );
}

$var = myFunction(
$foo,
$bar
);

// phpcs:set PEAR.Functions.FunctionCallSignature allowMultipleArguments false

fputs(
    STDOUT,
    "Examples:
    $ {$app} , --all
    $ {$app} --all", $something
);

$array = array();
array_map(
    function($x)
    {
        return trim($x, $y);
    }, $foo,
    $array
);

$bar = new stdClass(
    4, /* thanks */ 5, /* PSR-2 */ 6
);

public function doSomething()
{
    return $this->getFoo()
        ->doBar(
            $this->getX() // no comma here
                ->doY()  // this is still the first method argument
                ->doZ()  // this is still the first method argument
        );
}

doError(
    404, // status code
    'Not Found', // error name
    'Check your id' // fix
);

// phpcs:set PEAR.Functions.FunctionCallSignature allowMultipleArguments true

// Don't report errors for closing braces. Leave that to other sniffs.
foo(
    [
        'this',
        'is',
        'an',
        'array'
    ],
[
        'this',
        'is',
        'an',
        'array'
     ],
    array(
        'this',
        'is',
'an',
'array'
    ),
    array(
        'this',
        'is',
        'an',
        'array'
     ),
    function($x)
    {
        echo 'wee';

        return trim($x);
   }
);

function foo()
{
    myFunction(
        'string'.
        // comment
        // comment 
        'string'.
        /* comment
         * comment
        */
        'string'.
    );
}

// phpcs:set PEAR.Functions.FunctionCallSignature requiredSpacesAfterOpen 1
// phpcs:set PEAR.Functions.FunctionCallSignature requiredSpacesBeforeClose 1
test($arg, $arg2);
test( $arg, $arg2 );
test(  $arg, $arg2  );
test();
test( );
test(  );
// phpcs:set PEAR.Functions.FunctionCallSignature requiredSpacesAfterOpen 0
// phpcs:set PEAR.Functions.FunctionCallSignature requiredSpacesBeforeClose 0

?>
<script>
    var foo = <?php echo bar(
        'baz'
    ); ?>;
</script>
    <script>
        var foo = <?php echo bar(
            'baz'
        ); ?>;
    </script>
<?php

array_walk(
    $types,
    function ($title, $type) {
        $plural = 'all' !== $type ? 's' : '';
        ?>
        <li><a href="<?php esc_url('#tabs-documents-' . $type . $plural); ?>"><?php echo esc_html($title); ?></a></li>
        <?php
    }
);

$this->log(// ...
    'error',
    sprintf(
        'Message: %s',
        isset($e->getData()['object']['evidence_details'])
            ? $e->getData()['object']['evidence_details']['due_by']
            : ''
    ),
    array($e->getData()['object'])
);

?>
<div>
    <?php getTemplatePart(
        'partials/web-page/carousel-slick/item-slide/header',
        [
            'class' => $class
        ]
    ); ?>
</div>

<?php
if (true) {
    $test = '
   ' . function_0(
        $argument_0
    );
}

if (true) {
    $test = '
   ' . function_0(
    $argument_0,
           $argument_1
    );
}

myFunction(
    'foo', (object) array(
        'bar' => function ($x) {
            return true;
        },
        'baz' => false
    )
);
$qux = array_filter(
    $quux, function ($x) {
        return $x;
    }
);

array_filter(
    [1, 2],
    function ($i) : bool {
        return $i === 0;
    }
);

foo(array(
    'callback' => function () {
        $foo = 'foo';
        return;
    },
));

foo(
    $a,
    /*
    $c,

    $d,
    */
    $e
);

test(
        1,2,3,4
    );

class Test
{
    public function getInstance()
    {
        return new static(
          'arg',
              'foo'
        );
    }

    public function getSelf()
    {
        return new self(
         'a','b', 'c'
        );
    }
}

$x = $var('y',
'x');

$obj->{$x}(1,
  2);

(function ($a, $b) {
    return function ($c, $d) use ($a, $b) {
        echo $a, $b, $c, $d;
    };
})(
  'a','b'
)('c',
    'd');

class Foo
{
    public function bar($a, $b)
    {
        if (!$a || !$b) {
            return;
        }

        (new stdClass())->a = $a;
    }
}

(function ($a, $b) {
    return function ($c, $d) use ($a, $b) {
        echo $a, $b, $c, $d;
    };
})('a','b')('c','d');

function foo()
{
     Bar(
        function () {
        }
    );
}

$deprecated_functions = [
    'the_category_ID'
       => function_call( // 7 spaces, not 8. This is the problem line.
        $a,
        $b
    ),
];

$deprecated_functions = [
    'the_category_ID'
         => function_call( // 7 spaces, not 8. This is the problem line.
        $a,
        $b
    ),
];
